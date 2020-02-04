#include "DxLib.h"


#define GAME_WIDTH 800		//��ʂ̉���
#define GAME_HEIGHT 600		//��ʂ̏c��
#define GAME_COLOR 32		//�g�p�����ʂ̐F�̐�



#define GAME_WINDOW_NAME "GAME_TITLE"
#define GAME_WINDOW_MODECHANGE	TRUE

#define GAME_FPS_SPEED                       60		//FPS��

#define SET_WINDOW_ST_MODE_DEFAULT          0
#define SET_WINDOW_ST_MODE_TITLE_NON        1
#define SET_WINDOW_ST_MODE_TITLE_FLAME_NONE 2
#define SET_WINDOW_ST_MODE_FLAME_NONE		3

#define GAME_TITLEIMAGE "TITLEIMAGE\\Title.png"						//�^�C�g���摜
#define GAME_TITLE_BACKIMAGE "BACKIMAGE\\TITLE_BACK.jpg"			//�^�C�g���w�i�摜

#define GAME_PROLOGUE "BACKIMAGE\\PROLOGUE.png"						//�v�����[�O

#define GAME_MUSIC_OP        "MUSIC\\op.mp3"        //�^�C�g�����BGM
#define GAME_MUSIC_MAP_BGM   "MUSIC\\MAP_BGM.mp3"   //����BGM
#define GAME_MUSIC_BOSS      "MUSIC\\BOSS_BGM.mp3"  //BOSSBGM


#define GAME_MAP_1 "GAME_MAP\\A2.png"           //�}�b�v�`�b�v�̉摜
#define GAME_MAP_2 "GAME_MAP\\Cave1-EarthA5.png"
#define GAME_MAP_3 "GAME_MAP\\Cave1-RockA5.png"
#define GAME_MAP_4 "GAME_MAP\\Ruin-F.png"
#define ITEM       "ITEMIMAGE\\ITEM.png"  //�A�C�e���̉摜

//�}�b�v��csv
#define GAME_MAP_CSV_1 "GAME_MAP\\F1.csv"				//1�K
#define GAME_MAP_CSV_2 "GAME_MAP\\F2.csv"				//2�K
#define GAME_MAP_CSV_3 "GAME_MAP\\F3.csv"				//3�K
#define GAME_MAP_CSV_4 "GAME_MAP\\F4.csv"				//4�K
#define GAME_MAP_CSV_5 "GAME_MAP\\Boss.csv"				//�{�X

#define GAME_MAP_CSV_6 "GAME_MAP\\map_under.csv"		//map���n

#define GAME_MAP_CSV_7 "GAME_MAP\\Bossmap_under.csv"	//�{�Xmap���n

#define GAME_MAP_CSV_1_K "GAME_MAP\\kaidan.csv"			//1�K�̊K�i
#define GAME_MAP_CSV_2_K "GAME_MAP\\kaidan2.csv"		//2�K�̊K�i
#define GAME_MAP_CSV_3_K "GAME_MAP\\kaidan3.csv"		//3�K�̊K�i
#define GAME_MAP_CSV_4_K "GAME_MAP\\kaidan4.csv"		//4�K�̊K�i

#define GAME_MAP_CSV_1_A "GAME_MAP\\F1atari.csv"        //1�K�̓����蔻��
#define GAME_MAP_CSV_2_A "GAME_MAP\\F2atari.csv"		//2�K�̓����蔻��
#define GAME_MAP_CSV_3_A  "GAME_MAP\\F3atari.csv"		//3�K�̓����蔻��
#define GAME_MAP_CSV_4_A  "GAME_MAP\\F4atari.csv"		//4�K�̓����蔻��
#define GAME_MAP_CSV_BOSS "GAME_MAP\\bossatari.csv"		//�{�Xmap�̓����蔻��

//�}�b�v�̖���
#define GAME_MAP_NAME_SITA		"MAPDATA_SITA"
#define GAME_MAP_F1				"MAPDATA_F1"
#define GAME_MAP_F2				"MAPDATA_F2"
#define GAME_MAP_F3				"MAPDATA_F3"
#define GAME_MAP_F4				"MAPDATA_F4"
#define GAME_MAP_F1_K			"MAPDATA_F1_KAIDAN"
#define GAME_MAP_F2_K			"MAPDATA_F2_KAIDAN"
#define GAME_MAP_F3_K			"MAPDATA_F3_KAIDAN"
#define GAME_MAP_F4_K			"MAPDATA_F4_KAIDAN"
#define GAME_MAP_F1_ITEM		"MAPDATA_F1_ITEM"
#define GAME_MAP_BOSS_SITA		"MAPDATA_BOSS_UNDER"
#define GAME_MAP_BOSS			"MAPDATA_BOSS"

#define GAME_MAP_BUN_YOKO_CNT_MAX 16		//�e�}�b�v�`�b�v�̉��̍ő啪����
#define GAME_MAP_BUN_TATE_CNT_MAX 16		//�e�}�b�v�`�b�v�̏c�̍ő啪����

#define GAME_MAP_1_YOKO_MAX 16		//GAME_MAP_1�̉��̍ő啪����
#define GAME_MAP_1_TATE_MAX 12		//GAME_MAP_1�̏c�̍ő啪����

#define GAME_MAP_2_YOKO_MAX 8		//GAME_MAP_2�̉��̍ő啪����
#define GAME_MAP_2_TATE_MAX 16	    //GAME_MAP_2�̏c�̍ő啪����

#define GAME_MAP_3_YOKO_MAX 8		//GAME_MAP_3�̉��̍ő啪����
#define GAME_MAP_3_TATE_MAX 16	    //GAME_MAP_3�̏c�̍ő啪����

#define GAME_MAP_4_YOKO_MAX 16		//GAME_MAP_4�̉��̍ő啪����
#define GAME_MAP_4_TATE_MAX 16	    //GAME_MAP_4�̏c�̍ő啪����

#define GAME_MAP_YOKO 50		//�Q�[���}�b�v�̉��T�C�Y
#define GAME_MAP_TATE 38		//�Q�[���}�b�v�̏c�T�C�Y

#define GAME_MAP_YOKO_SIZE 32	//�Q�[���}�b�v��1�}�X�̃T�C�Y
#define GAME_MAP_TATE_SIZE 32

#define GAME_MAP_OK_KIND 100 //�ʍs�ł���}�b�v�̎��
#define GAME_MAP_NG_KIND 100 //�ʍs�ł��Ȃ��}�b�v�̎��

#define GAME_MAP_KAIDAN 4    //�K�i�̐�

#define GAME_CHARA                "CHARAIMAGE\\char_p04.png"  //�L�����̉摜
#define GAME_CHARA_BUN_YOKO_CNT 12		//�L�����̕�����(��)
#define GAME_CHARA_BUN_TATE_CNT 8       //�L�����̕�����(�c)
#define GAME_CHARA_YOKO_SIZE 24			//�L�����̑傫��(��)
#define GAME_CHARA_TATE_SIZE 32			//�L�����̑傫��(�c)
#define GAME_CHARA_MOTION_NUM 12		//�L�����̉摜��
#define GAME_CHARA_KIND_YOKO 3		    //�L�����̉��̎��
#define GAME_CHARA_KIND_TATE 4		    //�L�����̏c�̎��

#define GAME_CHARA_START_X 5	       //�L�����̍ŏ��̈ʒu
#define GAME_CHARA_START_Y 2           //�L�����̍ŏ��̈ʒu
#define GAME_CHARA_SPEED 2             //�L�����̃X�s�[�h

#define GAME_PLAYER_ITEM_MAX 100  //�v���C���[�̃A�C�e���ێ�MAX


//�A�C�e���֘A
#define GAME_ITEMIMAGE_CSV_1   "ITEMIMAGE\\F1_�A�C�e��.csv"  //1�K�̃A�C�e��
#define GAME_ITEM_BUN_YOKO_CNT 4		//�A�C�e���̕�����(��)
#define GAME_ITEM_BUN_TATE_CNT 4		//�A�C�e���̕�����(�c)
#define GAME_ITEM_YOKO_SIZE 32			//�A�C�e���̑傫��(��)
#define GAME_ITEM_TATE_SIZE 32			//�A�C�e���̑傫��(�c)


#define GAME_MAP_KIND		5
#define GAME_MAP_ITEM_KIND	4			//�A�C�e���̎��

//�G�֘A

#define GAME_ENE_COBRA_IMAGE   "ENEIMAGE\\cobras.png"

#define GAME_ENE_BOSS_IMAGE    "ENEIMAGE\\oni.png"    //BOSS�̉摜

#define GAME_BOSS_FIRST_MUKI_D 0 //�ŏ��̉摜�̌���(��)
#define GAME_BOSS_FIRST_MUKI_L 4 //�ŏ��̉摜�̌���(��)
#define GAME_BOSS_FIRST_MUKI_R 8 //�ŏ��̉摜�̌���(�E)
#define GAME_BOSS_FIRST_MUKI_U 12 //�ŏ��̉摜�̌���(��)

#define GAME_ENE_BOSS_BUN_YOKO_CNT 4 //BOSS�̕�����
#define GAME_ENE_BOSS_BUN_TATE_CNT 4

#define GAME_ENE_BOSS_YOKO_SIZE 64 //BOSS�̑傫��
#define GAME_ENE_BOSS_TATE_SIZE 112

#define GAME_ENE_BOSS_MOTION_NUM 16 //BOSS�̉摜��

#define GAME_ENE_BOSS_KIND_YOKO 4 //BOSS�̉摜��
#define GAME_ENE_BOSS_KIND_TATE 4 //BOSS�̉摜��

#define GAME_BOSS_NUM 1	//boss�̐�
#define GAME_BOSS_SPEED 3 //BOSS�̃X�s�[�h

//#######�񋓌^#########

enum GAME_SCENE {
	GAME_SCENE_TITLE,	//�^�C�g�����
	GAME_SCENE_PUOLOGUE, //�v�����[�O���
	GAME_SCENE_PLAY,	//�v���C���
	GAME_SCENE_GAMEOVER,	//GameOver���
//    GAME_SCENE_MOVE_SCENE,	//�V�[���J�ډ��
GAME_SCENE_CLEAR    //�N���A���
};

enum GAME_MAP_SCENE
{
	GAME_MAP_SCENE_F1, //F1
	GAME_MAP_SCENE_F2, //F2
	GAME_MAP_SCENE_F3, //F3
	GAME_MAP_SCENE_F4, //F4
	GAME_MAP_SCENE_BOSS //BOSS
}; //�}�b�v�̎��

enum CHARA_IMAGE {
	CHARA_KIND_1 = 0,
	CHARA_KIND_2 = 3,
	CHARA_KIND_3 = 6,
	CHARA_KIND_4 = 9,
	CHARA_KIND_5 = 54
}; //�L�����̎�ނ̗񋓌^



enum MAP_IMAGE {
	M_S = 5,   //�K�i
	M_B = 15   //��
};

enum ITEM_NAME {
	BRANCH,  //�}
	COPPER,  //��
	IRON,   //�S
	GOLD    //��
}; //�A�C�e���̖��O

struct STRUCT_GAZOU {
	int Handle;			//�摜�̃n���h��
	char FilePath[128];	//�t�@�C���̃p�X
	int X;				//���̈ʒu
	int Y;				//�c�̈ʒu
	int Width;			//���̃T�C�Y
	int Height;			//�c�̃T�C�Y
	int C_Width;		//���̒��S�ʒu
	int C_Height;		//�c�̒��S�ʒu
}; //�摜�\����

struct STRUCT_IMAGE
{
	char FilePath[128];												//�t�@�C���̃p�X
	int Handle[GAME_MAP_BUN_YOKO_CNT_MAX * GAME_MAP_BUN_TATE_CNT_MAX];		//�摜�̃n���h��
	int X[GAME_MAP_BUN_YOKO_CNT_MAX * GAME_MAP_BUN_TATE_CNT_MAX];			//���̈ʒu
	int Y[GAME_MAP_BUN_YOKO_CNT_MAX * GAME_MAP_BUN_TATE_CNT_MAX];			//�c�̈ʒu
	int Width[GAME_MAP_BUN_YOKO_CNT_MAX * GAME_MAP_BUN_TATE_CNT_MAX];		//���̃T�C�Y
	int Height[GAME_MAP_BUN_YOKO_CNT_MAX * GAME_MAP_BUN_TATE_CNT_MAX];		//�c�̃T�C�Y
	int C_Width[GAME_MAP_BUN_YOKO_CNT_MAX * GAME_MAP_BUN_TATE_CNT_MAX];		//���̒��S�ʒu
	int C_Height[GAME_MAP_BUN_YOKO_CNT_MAX * GAME_MAP_BUN_TATE_CNT_MAX];	//�c�̒��S�ʒu

};	//STRUCT_IMAGE�\����

struct STRUCT_MAP
{
	char name[64];	//�}�b�v�̖���
	char FilePath[128];		//�t�@�C���̃p�X
	int data[GAME_MAP_TATE][GAME_MAP_YOKO];	//�}�b�v��CSV�̃f�[�^
	int mapdate_Init[GAME_MAP_TATE][GAME_MAP_YOKO];	//�}�b�v��CSV�f�[�^

	int Handle[GAME_MAP_BUN_YOKO_CNT_MAX*GAME_MAP_BUN_TATE_CNT_MAX];  //�摜�̃n���h��
	int X[GAME_MAP_BUN_YOKO_CNT_MAX*GAME_MAP_BUN_TATE_CNT_MAX];		//���̈ʒu
	int Y[GAME_MAP_BUN_YOKO_CNT_MAX*GAME_MAP_BUN_TATE_CNT_MAX];		//�c�̈ʒu
	int Width[GAME_MAP_BUN_YOKO_CNT_MAX*GAME_MAP_BUN_TATE_CNT_MAX];	//���̃T�C�Y
	int Height[GAME_MAP_BUN_YOKO_CNT_MAX*GAME_MAP_BUN_TATE_CNT_MAX];  //�c�̃T�C�Y
	int C_Width[GAME_MAP_BUN_YOKO_CNT_MAX*GAME_MAP_BUN_TATE_CNT_MAX]; //���̒��S�ʒu
	int C_Height[GAME_MAP_BUN_YOKO_CNT_MAX*GAME_MAP_BUN_TATE_CNT_MAX]; //�c�̒��S�ʒu

	int mapNGKind[GAME_MAP_NG_KIND];					//�}�b�v����̎��(�ʍs�ł��Ȃ�)
	int mapOKKind[GAME_MAP_OK_KIND];					//�}�b�v����̎��(�ʍs�ł���)

	RECT rect_NG[GAME_MAP_TATE][GAME_MAP_YOKO];			//�����蔻��̗̈�(�ʍs�ł��Ȃ�)
	RECT rect_NG_First[GAME_MAP_TATE][GAME_MAP_YOKO];	//�����蔻��̗̈�(�ʍs�ł��Ȃ�)(�ŏ�)

	RECT rect_OK[GAME_MAP_TATE][GAME_MAP_YOKO];			//�����蔻��̗̈�(�ʍs�ł���)
	RECT rect_OK_First[GAME_MAP_TATE][GAME_MAP_YOKO];	//�����蔻��̗̈�(�ʍs�ł���)(�ŏ�)

	RECT rectMap_Item[GAME_MAP_TATE][GAME_MAP_YOKO];			//�A�C�e�������蔻��̗̈�(�ʍs�ł���)
	RECT rectMap_Item_First[GAME_MAP_TATE][GAME_MAP_YOKO];	//�����蔻��̗̈�(�ʍs�ł���)(�ŏ�)

	RECT rectMap_Kaidan[GAME_MAP_TATE][GAME_MAP_YOKO];		//�K�i
	RECT rectMap_Kaidan_First[GAME_MAP_TATE][GAME_MAP_YOKO];

}; //MAP�\����

struct STRUCT_CHARAIMAGE
{
	char FilePath[128];												//�t�@�C���̃p�X
	int Handle[GAME_CHARA_BUN_YOKO_CNT*GAME_CHARA_BUN_TATE_CNT];	//�摜�̃n���h��
	int X[GAME_CHARA_BUN_YOKO_CNT*GAME_CHARA_BUN_TATE_CNT];			//���̈ʒu
	int Y[GAME_CHARA_BUN_YOKO_CNT*GAME_CHARA_BUN_TATE_CNT];			//�c�̈ʒu
	int Width[GAME_CHARA_BUN_YOKO_CNT*GAME_CHARA_BUN_TATE_CNT];		//�c�̃T�C�Y
	int Height[GAME_CHARA_BUN_YOKO_CNT*GAME_CHARA_BUN_TATE_CNT];	//���̃T�C�Y
	int C_Width[GAME_CHARA_BUN_YOKO_CNT*GAME_CHARA_BUN_TATE_CNT];	//���̒��S�ʒu
	int C_Height[GAME_CHARA_BUN_YOKO_CNT*GAME_CHARA_BUN_TATE_CNT];	//�c�̒��S�ʒu
}; //STRUCT_CHARAIMAGE�\����

struct STRUCT_CHARADATA
{
	STRUCT_CHARAIMAGE charimage;	//�摜
	int Handle[GAME_CHARA_MOTION_NUM];//�摜�̃n���h��
	int X;							//�c�̈ʒu
	int Y;							//���̈ʒu
	int Width;						//���̃T�C�Y
	int Height;						//�c�̃T�C�Y
	int C_Width;					//���̒��S�ʒu
	int C_Height;					//�c�̒��S�ʒu
	int NowHandleNum;				//���݂̉摜�̃n���h��
	int NowHandleCnt;				//���݂̃n���h���J�E���g
	int NowHandleCntMAX;			//���݂̃n���h���J�E���gMAX

	int Speed;						//���x
	int MoveDistX;					//�ړ�����X
	int MoveDistY;					//�ړ�����Y

	BOOL CanMoveUp;					//��ɍs���邩
	BOOL CanMoveDown;				//���̍s���邩
	BOOL CanMoveLeft;				//���̍s���邩
	BOOL CanMoveRight;				//�E�ɍs���邩

	BOOL ScrollOK_X;				//�X�N���[���ł��邩�ǂ���
	BOOL ScrollOK_Y;

	int atariX;			//�����蔻���X�ʒu
	int atariY;			//�����蔻���Y�ʒu
	int atariWidth;		//�����蔻��̕�
	int atariHeight;	//�����蔻��̍���	
	RECT atariRect;		//�����蔻��̋�`�̈�

	char name[255];		//���O


	int item[GAME_MAP_ITEM_KIND]; //�����Ă���A�C�e���̐�

	RECT rect_act;	//�s���̗̈�
	RECT rect_item;  //���̗̈�[�A�C�e��]

	int act_kind;				//�s���̎��
	BOOL IsActKeyDown_left;		//�s�����������Ƃ�(�E)
	BOOL IsActKeyDown_right;	//�s�����������Ƃ�(��)

}; //STRUCT_CHARADATA�\����

struct STRUCT_BOSS
{
	STRUCT_CHARAIMAGE bossimage;	//�摜
	int Handle[GAME_ENE_BOSS_MOTION_NUM];//�摜�̃n���h��
	int X;							//�c�̈ʒu
	int Y;							//���̈ʒu
	int Width;						//���̃T�C�Y
	int Height;						//�c�̃T�C�Y
	int C_Width;					//���̒��S�ʒu
	int C_Height;					//�c�̒��S�ʒu
	int NowHandleNum;				//���݂̉摜�̃n���h��
	int NowHandleCnt;				//���݂̃n���h���J�E���g
	int NowHandleCntMAX;			//���݂̃n���h���J�E���gMAX

	int Speed = GAME_BOSS_SPEED;

	BOOL CanMoveUp;					    //��ɍs���邩
	BOOL CanMoveDown;				    //���̍s���邩
	BOOL CanMoveLeft;					//���ɍs���邩
	BOOL CanMoveRight;					//�E�ɍs���邩

	BOOL IsAlive;						//�����Ă��邩�ǂ���
	BOOL IsView;						//�\���ł���Ƃ�
	int muki;							//�G�̌���
	int SetFirstX;						//�G�̍ŏ���X�ʒu
	int SetFirstY;						//�G�̍ŏ���Y�ʒu
	int SetFirstmuki;					//�G�̍ŏ��̌���

	int atariX;							//�����蔻���X�ʒu
	int atariY;							//�����蔻���Y�ʒu
	int atariWidth;						//�����蔻��̕�
	int atariHeight;					//�����蔻��̍���
	RECT atariRect;						//�����蔻��̋�`�̈�
}; //BOSS�\����

struct STRUCT_MUSIC
{
	int Handle;					//���̃n���h��
	char FilePath[128];			//�t�@�C���̃p�X
	int Playtype;				//���̍Đ����@
};	//���\����

//###### ���O�̍Ē�` ########
typedef STRUCT_GAZOU GAZOU;
typedef STRUCT_IMAGE IMAGE;
typedef STRUCT_MAP MAP;
typedef STRUCT_CHARAIMAGE CHARAIMAGE;
typedef STRUCT_CHARADATA CHARADATA;
typedef STRUCT_BOSS BOSS;
typedef STRUCT_MUSIC MUSIC;

GAZOU  BackGround;	//�^�C�g���w�i�摜
GAZOU  BackGround_T;  //�^�C�g���摜
GAZOU  BackGround_P;	//�v�����[�O
GAZOU  Boss;			//�{�X

MAP MapImage;
MAP MapImage_U[GAME_MAP_KIND];  //���n�̃}�b�v�摜
MAP MapImage_W[GAME_MAP_KIND];  //�ǂȂǂ̃}�b�v�摜
MAP MapImage_S[GAME_MAP_KIND];  //�K�i�̃}�b�v�摜
MAP MapImage_A[GAME_MAP_KIND];  //�����蔻��̉摜

MAP ItemImage_1[GAME_MAP_ITEM_KIND];  //1�K�̃A�C�e���摜

MUSIC MUSIC_MY_TITLE;
MUSIC MUSIC_MY_BGM_1;
MUSIC MUSIC_MY_BOSS;

//######### �O���[�o���ϐ� #######

//�E�B���h�E�֌W
WNDPROC WndProc;			//�E�B���h�E�v���V�[�W���̃A�h���X
BOOL IsWM_CREATE = FALSE;   //WM_CREATE������ɋN�����������f����

//FPS�֘A
int StartTimeFps;					//����J�n����
int CountFps;						//�J�E���^
float CalcFps;						//�v�Z����
int SampleNumFps = GAME_FPS_SPEED;  //���ς����T���v��

//�L�[�{�[�h�֌W
char AllKeyState[256];	//���ׂẴL�[�̏�Ԃ�����

//�V�[���֌W
int GameSceneNow = (int)GAME_SCENE_TITLE;	//�ŏ��̃Q�[����ʂ��^�C�g����ʂɐݒ�
int GameMapNow = (int)GAME_MAP_SCENE_F1;

int MapNowPos = 0;  //���݂̃}�b�v
MAP MapDataKind[5];

//�L�����n
CHARAIMAGE CharaImage;		//�L�����̉摜
CHARADATA  Myplayer;		//�L�����̃f�[�^

CHARAIMAGE BossImage;             //�{�X�̉摜
BOSS  oni;							//�{�X�̃f�[�^

//�A�C�e���n
int MapKaidanKind[GAME_MAP_KAIDAN] = { 5 };	//�K�i�̔ԍ�


int MapItemKind[GAME_MAP_ITEM_KIND] = { 0,1,2,3 };	//�A�C�e���̔ԍ�
char ItemName[GAME_MAP_ITEM_KIND][128] = { "�؂̎}","��","�S","��" };	//�A�C�e����

bool itemdrowflag = false;

//�v���C���[�̃C���[�W�摜�̔ԍ���ݒ肷��
int PlayerImageNum[GAME_CHARA_MOTION_NUM];
int BossImageNum[GAME_ENE_BOSS_MOTION_NUM];

int ScrollCntYoko = 0;	//�X�N���[���J�E���^(��)
int ScrollDistPlusYoko = 1;  //�X�N���[�����鋗��(��)


int ScrollCntTate = 0;  //�X�N���[���J�E���^(�c)
int ScrollDistPlusTate = 1;  //�X�N���[�����鋗��(�c)

BOOL IsActiveCheck = FALSE;	//��ʂ̃A�N�e�B�u�`�F�b�N�̗L����

int StopActiveStartTime = 0;	//��A�N�e�B�u���̊J�n����
int StopActiveStopTime = 0;		//��A�N�e�B�u���̏I������
int StopActiveTotaTime = 0;		//��A�N�e�B�u���̌o�ߎ���

//####### �v���g�^�C�v�錾 ##########
LRESULT CALLBACK MY_WNDPROC(HWND, UINT, WPARAM, LPARAM); //����E�B���h�E�v���V�[�W��

VOID MY_FPS_UPDATE(VOID);		//FPS�l���v���A�X�V������֐�
VOID MY_FPS_DRAW(VOID);			//FPS�l��`�悷��֐�
VOID MY_FPS_WAIT(VOID);			//FPS�l���v�����A�҂֐�

VOID MY_ALL_KEYDOWN_UPDATE(VOID);	//�L�[���͏�Ԃ��X�V����֐�

VOID MY_GAME_TITLE(VOID);		//�^�C�g�����
VOID MY_GAME_PROLOGUE(VOID);	//�v�����[�O���
VOID MY_GAME_PLAY(VOID);		//�v���C���
VOID MY_GAME_GAMEOVER(VOID);    //�Q�[���I�[�o�[���
VOID MY_GAME_CLEAR(VOID);			//�G���h���

VOID MY_PLAY_BACKIMAGE_DRAW(VOID);	//�w�i�摜��`�悷��֐�

VOID MY_PLAY_MAP_DRAW(MAP);			//�}�b�v��\������֐�
VOID MY_PLAY_MAP_DRAW_ATARI(MAP *);		//�}�b�v�̓����蔻���`�悷��֐�
BOOL MY_GAZOU_LOAD(GAZOU *, int, int, const char *);			//�摜��ǂݍ��ސݒ������֐�

BOOL MY_PLAY_INIT(VOID);	//�������֐�
VOID MY_PG_INIT(VOID);	//�v�����[�O�摜�ʒu������

BOOL MY_MAP_READ_CSV_KIND_SET(MAP *); //�}�b�v����̎�ނ�ݒ肷��

BOOL MY_MAP_READ_CSV_NUM(MAP *, const char *, const char *);			//�Q�[���}�b�v��F1CSV��ǂݍ��ފ֐�

BOOL MY_MAP_LOAD_BUNKATSU(MAP *, int, int, int, int, int, const char *);	//MAP�𕪊����ēǂݍ��ސݒ������֐�
BOOL MY_MAP_2_LOAD_BUNKATSU(MAP *, int, int, int, int, int, const char *);	//MAP�𕪊����ēǂݍ��ސݒ������֐�
BOOL MY_MAP_3_LOAD_BUNKATSU(MAP *, int, int, int, int, int, const char *);	//MAP�𕪊����ēǂݍ��ސݒ������֐�
BOOL MY_MAP_4_LOAD_BUNKATSU(MAP *, int, int, int, int, int, const char *);	//MAP�𕪊����ēǂݍ��ސݒ������֐�


BOOL MY_CHARA_LOAD_BUNKATSU(CHARAIMAGE *, int, int, int, int, int, const char *);

BOOL MY_PLAYER_INIT(CHARADATA *, CHARAIMAGE, int *, int, int, int);	//�v���C���[������������֐�
VOID MY_PLAY_PLAYER_DRAW(CHARADATA);	//�v���C���[��\������֐�

VOID MY_PLAY_PLAYER_OPERATION(VOID);						//�v���C���[�𑀍삷��֐�
BOOL MY_PLAY_PLAYER_OPERATION_KEY(int *, int *);			//�v���C���[���L�[���삷��֐�

VOID MY_SET_PLAYER_ATARI(CHARADATA *);			//�v���C���[�̓����蔻��̗̈��ݒ肷��֐�

VOID MY_PLAY_ENEMY_DRAW_DETAIL(BOSS *);		//�G��\������(�ڍ�)�֐�
VOID MY_PLAY_ENEMY_DRAW(BOSS *);						//�G��\������֐�

VOID MY_PLAY_ENEMY_OPERATION_DETAIL(BOSS *, CHARADATA *);	//�G�𑀍삷��(�ڍ�)�֐�
VOID MY_PLAY_ENEMY_OPERATION(VOID);					//�G�𑀍삷��֐�

VOID MY_SET_ENEMY_ATARI(BOSS *);			//�G�̓����蔻��̗̈��ݒ肷��֐�

VOID MY_PLAY_ENEMY_MAP_COLLISION(BOSS *);  //�G�ƃ}�b�v�Ƃ̐ڐG�֐�

BOOL MY_INIT_ENEMY(BOSS *, CHARAIMAGE, int *, int, int, int, int);	//�G������������֐�

BOOL MY_CHECK_RECT_ATARI(RECT, RECT);		//�̈�̓����蔻�������֐�
BOOL MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(RECT, RECT map[GAME_MAP_TATE][GAME_MAP_YOKO], int *, int *);  //�L�����N�^�[�ƃ}�b�v�̓����蔻�������֐�

BOOL MY_CHECK_RECT_ATARI_PLAYER_BOSS_ATARIBASHO(RECT, RECT, int *, int *);    //�L�����N�^�[�ƃ{�X�̓����蔻�������֐�

VOID MY_PLAY_ENEMY_CHARA_COLLISION(BOSS *, CHARADATA *); //�G�ƃv���C���[�̐ڐG�֐�

int MapData[GAME_MAP_TATE][GAME_MAP_YOKO];  //�}�b�v�̃f�[�^fp
FILE *fp_map_csv;  //�t�@�C���̊Ǘ��ԍ�(�|�C���^)
int MapData_Init[GAME_MAP_TATE][GAME_MAP_YOKO]; //�}�b�v�̃f�[�^(�������p)

VOID MY_PLAY_PLAYER_GETITEM(VOID);  //�A�C�e�����擾����֐�

VOID MY_MAP_SCENE_MOVE(VOID);	//�K�i�ɐG���ƃ}�b�v���ړ�������֐�

BOOL MY_MUSIC_LOAD(MUSIC *, const char *);

//############ �v���O�����ōŏ��Ɏ��s�����֐� ###########
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	ChangeWindowMode(TRUE);								//�E�B���h�E���[�h�ɐݒ�
	SetGraphMode(GAME_WIDTH, GAME_HEIGHT, GAME_COLOR); //�w��̐��l�ŉ�ʂ�\������

	SetWindowStyleMode(SET_WINDOW_ST_MODE_DEFAULT);		//�^�C�g���o�[����

	SetMainWindowText(TEXT(GAME_WINDOW_NAME));			//�^�C�g������

	if (DxLib_Init() == -1) {			//DX���C�u��������������
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);		//Drow�n�֐��͗���ʂɕ\��

	//MY_MAP_READ_CSV_UE_KIND_SET(&MapImage_S);	//�}�b�v�̏�̎�ނ�ݒ�
	//MY_MAP_READ_CSV_NAKA_KIND_SET(&MapImage_W);	//�}�b�v�̒��̎�ނ�ݒ�
	//MY_MAP_READ_CSV_SITA_KIND_SET(&MapImage_U);	//�}�b�v�̉��̎�ނ�ݒ�
	MY_MAP_READ_CSV_KIND_SET(MapImage_A);

	MY_MAP_READ_CSV_NUM(&MapImage_W[GAME_MAP_SCENE_F1], GAME_MAP_CSV_1, GAME_MAP_F1);		    //�}�b�v�P�̏��ǂݍ��݁A�����蔻��̗̈������
	MY_MAP_READ_CSV_NUM(&MapImage_U[GAME_MAP_SCENE_F1], GAME_MAP_CSV_6, GAME_MAP_NAME_SITA);	   //�}�b�v�P�̉���ǂݍ��݁A�����蔻��̗̈������
	MY_MAP_READ_CSV_NUM(&MapImage_S[GAME_MAP_SCENE_F1], GAME_MAP_CSV_1_K, GAME_MAP_F1_K);		//�}�b�v�P�̊K�i��ǂݍ��݁A�����蔻��̗̈������
	MY_MAP_READ_CSV_NUM(&MapImage_A[GAME_MAP_SCENE_F1], GAME_MAP_CSV_1_A, GAME_MAP_F1);        //�}�b�v�P��atari��ǂݍ��݁A�����蔻��̗̈������

	MY_MAP_READ_CSV_NUM(&MapImage_W[GAME_MAP_SCENE_F2], GAME_MAP_CSV_2, GAME_MAP_F2);		    //�}�b�v2�̏��ǂݍ��݁A�����蔻��̗̈������
	MY_MAP_READ_CSV_NUM(&MapImage_S[GAME_MAP_SCENE_F2], GAME_MAP_CSV_2_K, GAME_MAP_F2_K);		//�}�b�v2�̊K�i��ǂݍ��݁A�����蔻��̗̈������
	MY_MAP_READ_CSV_NUM(&MapImage_A[GAME_MAP_SCENE_F2], GAME_MAP_CSV_2_A, GAME_MAP_F2);        //�}�b�v2��atari��ǂݍ��݁A�����蔻��̗̈������

	MY_MAP_READ_CSV_NUM(&MapImage_W[GAME_MAP_SCENE_F3], GAME_MAP_CSV_3, GAME_MAP_F3);		    //�}�b�v2�̏��ǂݍ��݁A�����蔻��̗̈������
	MY_MAP_READ_CSV_NUM(&MapImage_S[GAME_MAP_SCENE_F3], GAME_MAP_CSV_3_K, GAME_MAP_F3_K);		//�}�b�v2�̊K�i��ǂݍ��݁A�����蔻��̗̈������
	MY_MAP_READ_CSV_NUM(&MapImage_A[GAME_MAP_SCENE_F3], GAME_MAP_CSV_3_A, GAME_MAP_F3);        //�}�b�v2��atari��ǂݍ��݁A�����蔻��̗̈������

	MY_MAP_READ_CSV_NUM(&MapImage_W[GAME_MAP_SCENE_F4], GAME_MAP_CSV_4, GAME_MAP_F4);		    //�}�b�v2�̏��ǂݍ��݁A�����蔻��̗̈������
	MY_MAP_READ_CSV_NUM(&MapImage_S[GAME_MAP_SCENE_F4], GAME_MAP_CSV_4_K, GAME_MAP_F4_K);		//�}�b�v2�̊K�i��ǂݍ��݁A�����蔻��̗̈������
	MY_MAP_READ_CSV_NUM(&MapImage_A[GAME_MAP_SCENE_F4], GAME_MAP_CSV_4_A, GAME_MAP_F4);        //�}�b�v2��atari��ǂݍ��݁A�����蔻��̗̈������

	MY_MAP_READ_CSV_NUM(&MapImage_W[GAME_MAP_SCENE_BOSS], GAME_MAP_CSV_5, GAME_MAP_BOSS);        //BossMap�̏��ǂݍ���,�����蔻��̗̈������
	MY_MAP_READ_CSV_NUM(&MapImage_A[GAME_MAP_SCENE_BOSS], GAME_MAP_CSV_BOSS, GAME_MAP_BOSS);     //BOSSmap�̓����蔻���ǂݍ��݁A�����蔻��̗̈������

	MY_MAP_READ_CSV_NUM(&ItemImage_1[GAME_MAP_SCENE_F1], GAME_ITEMIMAGE_CSV_1, GAME_MAP_F1_ITEM);		    //�}�b�v�P�̃A�C�e����ǂݍ��݁A�����蔻��̗̈������

	if (MY_GAZOU_LOAD(&BackGround, 0, 0, GAME_TITLE_BACKIMAGE) == FALSE) {  //�^�C�g���w�i�摜��ǂݍ���
		MessageBox(NULL, GAME_TITLE_BACKIMAGE, "NotFound", MB_OK);
		return -1;
	}


	if (MY_GAZOU_LOAD(&BackGround_T, 150, 200, GAME_TITLEIMAGE) == FALSE) {  //�^�C�g���摜��ǂݍ���
		MessageBox(NULL, GAME_TITLEIMAGE, "NotFound", MB_OK);
		return -1;
	}

	if (MY_GAZOU_LOAD(&BackGround_P, 0, 0, GAME_PROLOGUE) == FALSE) {  //�v�����[�O�摜��ǂݍ���
		MessageBox(NULL, GAME_PROLOGUE, "NotFound", MB_OK);
		return -1;
	}

	//�S
	if (MY_CHARA_LOAD_BUNKATSU(&oni.bossimage, GAME_ENE_BOSS_BUN_YOKO_CNT*GAME_ENE_BOSS_BUN_TATE_CNT, GAME_ENE_BOSS_BUN_YOKO_CNT, GAME_ENE_BOSS_BUN_TATE_CNT, GAME_ENE_BOSS_YOKO_SIZE, GAME_ENE_BOSS_TATE_SIZE, GAME_ENE_BOSS_IMAGE) == FALSE) {   //GAME_CHARA��ǂݍ���
		MessageBox(NULL, GAME_ENE_BOSS_IMAGE, "NotFound", MB_OK);
		return -1;
	}


	if (MY_MAP_LOAD_BUNKATSU(&MapImage_U[GAME_MAP_SCENE_F1], GAME_MAP_1_YOKO_MAX * GAME_MAP_1_TATE_MAX, GAME_MAP_1_YOKO_MAX, GAME_MAP_1_TATE_MAX, GAME_MAP_YOKO_SIZE, GAME_MAP_TATE_SIZE, GAME_MAP_1) == FALSE) {  //���n�̃}�b�v�`�b�v�摜��ǂݍ���
		MessageBox(NULL, GAME_MAP_1, "NotFound", MB_OK);
		return -1;
	}


	if (MY_MAP_2_LOAD_BUNKATSU(&MapImage_W[GAME_MAP_SCENE_F1], GAME_MAP_2_YOKO_MAX * GAME_MAP_2_TATE_MAX, GAME_MAP_2_YOKO_MAX, GAME_MAP_2_TATE_MAX, GAME_MAP_YOKO_SIZE, GAME_MAP_TATE_SIZE, GAME_MAP_2) == FALSE) {  //�ǌn�̃}�b�v�`�b�v�摜��ǂݍ���
		MessageBox(NULL, GAME_MAP_2, "NotFound", MB_OK);
		return -1;
	}

	if (MY_MAP_2_LOAD_BUNKATSU(&MapImage_W[GAME_MAP_SCENE_F2], GAME_MAP_2_YOKO_MAX * GAME_MAP_2_TATE_MAX, GAME_MAP_2_YOKO_MAX, GAME_MAP_2_TATE_MAX, GAME_MAP_YOKO_SIZE, GAME_MAP_TATE_SIZE, GAME_MAP_2) == FALSE) {  //�ǌn�̃}�b�v�`�b�v�摜��ǂݍ���
		MessageBox(NULL, GAME_MAP_2, "NotFound", MB_OK);
		return -1;
	}

	if (MY_MAP_2_LOAD_BUNKATSU(&MapImage_W[GAME_MAP_SCENE_F3], GAME_MAP_2_YOKO_MAX * GAME_MAP_2_TATE_MAX, GAME_MAP_2_YOKO_MAX, GAME_MAP_2_TATE_MAX, GAME_MAP_YOKO_SIZE, GAME_MAP_TATE_SIZE, GAME_MAP_2) == FALSE) {  //�ǌn�̃}�b�v�`�b�v�摜��ǂݍ���
		MessageBox(NULL, GAME_MAP_2, "NotFound", MB_OK);
		return -1;
	}

	if (MY_MAP_2_LOAD_BUNKATSU(&MapImage_W[GAME_MAP_SCENE_F4], GAME_MAP_2_YOKO_MAX * GAME_MAP_2_TATE_MAX, GAME_MAP_2_YOKO_MAX, GAME_MAP_2_TATE_MAX, GAME_MAP_YOKO_SIZE, GAME_MAP_TATE_SIZE, GAME_MAP_2) == FALSE) {  //�ǌn�̃}�b�v�`�b�v�摜��ǂݍ���
		MessageBox(NULL, GAME_MAP_2, "NotFound", MB_OK);
		return -1;
	}

	if (MY_MAP_2_LOAD_BUNKATSU(&MapImage_W[GAME_MAP_SCENE_BOSS], GAME_MAP_2_YOKO_MAX*GAME_MAP_2_TATE_MAX, GAME_MAP_2_YOKO_MAX, GAME_MAP_2_TATE_MAX, GAME_MAP_YOKO_SIZE, GAME_MAP_TATE_SIZE, GAME_MAP_2) == FALSE) {  //�{�X�G���A�̃}�b�v�`�b�v��ǂݍ���
		MessageBox(NULL, GAME_MAP_2, "NotFound", MB_OK);
		return -1;
	}

	if (MY_MAP_4_LOAD_BUNKATSU(&MapImage_S[GAME_MAP_SCENE_F1], GAME_MAP_4_YOKO_MAX*GAME_MAP_4_TATE_MAX, GAME_MAP_4_YOKO_MAX, GAME_MAP_4_TATE_MAX, GAME_MAP_YOKO_SIZE, GAME_MAP_TATE_SIZE, GAME_MAP_4) == FALSE) {  //�K�i�̃}�b�v�`�b�v��ǂݍ���
		MessageBox(NULL, GAME_MAP_4, "NotFound", MB_OK);
		return -1;
	}

	if (MY_MAP_4_LOAD_BUNKATSU(&MapImage_S[GAME_MAP_SCENE_F2], GAME_MAP_4_YOKO_MAX*GAME_MAP_4_TATE_MAX, GAME_MAP_4_YOKO_MAX, GAME_MAP_4_TATE_MAX, GAME_MAP_YOKO_SIZE, GAME_MAP_TATE_SIZE, GAME_MAP_4) == FALSE) {  //�K�i�̃}�b�v�`�b�v��ǂݍ���
		MessageBox(NULL, GAME_MAP_4, "NotFound", MB_OK);
		return -1;
	}

	if (MY_MAP_4_LOAD_BUNKATSU(&MapImage_S[GAME_MAP_SCENE_F3], GAME_MAP_4_YOKO_MAX*GAME_MAP_4_TATE_MAX, GAME_MAP_4_YOKO_MAX, GAME_MAP_4_TATE_MAX, GAME_MAP_YOKO_SIZE, GAME_MAP_TATE_SIZE, GAME_MAP_4) == FALSE) {  //�K�i�̃}�b�v�`�b�v��ǂݍ���
		MessageBox(NULL, GAME_MAP_4, "NotFound", MB_OK);
		return -1;
	}

	if (MY_MAP_4_LOAD_BUNKATSU(&MapImage_S[GAME_MAP_SCENE_F4], GAME_MAP_4_YOKO_MAX*GAME_MAP_4_TATE_MAX, GAME_MAP_4_YOKO_MAX, GAME_MAP_4_TATE_MAX, GAME_MAP_YOKO_SIZE, GAME_MAP_TATE_SIZE, GAME_MAP_4) == FALSE) {  //�K�i�̃}�b�v�`�b�v��ǂݍ���
		MessageBox(NULL, GAME_MAP_4, "NotFound", MB_OK);
		return -1;
	}


	if (MY_CHARA_LOAD_BUNKATSU(&CharaImage, GAME_CHARA_BUN_YOKO_CNT*GAME_CHARA_BUN_TATE_CNT, GAME_CHARA_BUN_YOKO_CNT, GAME_CHARA_BUN_TATE_CNT, GAME_CHARA_YOKO_SIZE, GAME_CHARA_TATE_SIZE, GAME_CHARA) == FALSE) {   //GAME_CHARA��ǂݍ���
		MessageBox(NULL, GAME_CHARA, "NotFound", MB_OK);
		return -1;
	}

	if (MY_MAP_LOAD_BUNKATSU(&ItemImage_1[GAME_MAP_SCENE_F1], GAME_ITEM_BUN_YOKO_CNT * GAME_ITEM_BUN_TATE_CNT, GAME_ITEM_BUN_YOKO_CNT, GAME_ITEM_BUN_TATE_CNT, GAME_ITEM_YOKO_SIZE, GAME_ITEM_TATE_SIZE, ITEM) == FALSE) {  //�A�C�e���̃}�b�v�`�b�v�摜��ǂݍ���
		MessageBox(NULL, ITEM, "NotFound", MB_OK);
		return -1;
	}

	//����ǂݍ���
	MY_MUSIC_LOAD(&MUSIC_MY_TITLE, GAME_MUSIC_OP);
	MY_MUSIC_LOAD(&MUSIC_MY_BGM_1, GAME_MUSIC_MAP_BGM);
	MY_MUSIC_LOAD(&MUSIC_MY_BOSS, GAME_MUSIC_BOSS);


	IsActiveCheck = TRUE;

	while (TRUE)		//�������[�v
	{
		if (ProcessMessage() != 0)	//���b�Z�[�W�����̌��ʂ��G���[�̂Ƃ��A�����I��
		{
			break;
		}

		if (ClearDrawScreen() != 0) {	//��ʂ������ł��Ȃ��������A�����I��
			break;
		}

		MY_ALL_KEYDOWN_UPDATE();		//�L�[�̏�Ԃ��擾

		/*if (GameSceneNow != (int)GAME_SCENE_MOVE_SCENE)
		{
			SceneBefore = GameSceneNow;
		}*/

		switch (GameSceneNow)	//�V�[���I��
		{
		case(int)GAME_SCENE_TITLE:	//�^�C�g����ʂ̏�����������

			MY_GAME_TITLE();	//�^�C�g����ʂ̏���

			break;	//�^�C�g����ʂ̏��������܂�


		case(int)GAME_SCENE_PUOLOGUE:	//�v�����[�O��ʂ̏�����������

			MY_GAME_PROLOGUE();	//�v�����[�O��ʂ̏���

			break;	//�v�����[�O��ʂ̏��������܂�

		case (int)GAME_SCENE_PLAY:	//�v���C��ʂ̏�����������

			MY_GAME_PLAY();	//�v���C��ʂ̏���

			break;	//�v���C��ʂ̏��������܂�

		case (int)GAME_SCENE_GAMEOVER:  //�Q�[���I�[�o�[��ʂ̏�����������

			MY_GAME_GAMEOVER();   //�Q�[���I�[�o�[��ʂ̏���

			break;  //�Q�[���I�[�o�[��ʂ̏��������܂�

		case (int)GAME_SCENE_CLEAR:	//�G���h��ʂ̏�����������

			MY_GAME_CLEAR();	//�G���h��ʂ̏���

			break;	//�G���h��ʂ̏��������܂�

		default:

			break;
		}
		MY_FPS_UPDATE();		//FPS�̏���(�X�V)

		MY_FPS_DRAW();			//FPS�̏���(�`��)

		ScreenFlip();			//���j�^�̃��t���b�V�����[�g�̑����ŗ���ʂ��ĕ`��

		MY_FPS_WAIT();			//FPS�̏���(�҂�)

	}

	DeleteGraph(BackGround.Handle);	//�w�i�̃n���h�����폜

	DeleteGraph(BackGround_T.Handle);	//�^�C�g���摜�̃n���h�����폜

	DeleteGraph(BackGround_P.Handle);	//�v�����[�O�摜�̃n���h�����폜

	for (int mapCnt = 0; mapCnt < GAME_MAP_1_YOKO_MAX * GAME_MAP_1_TATE_MAX; mapCnt++)
	{
		DeleteGraph(MapImage_U[GAME_MAP_SCENE_F1].Handle[mapCnt]);	//�}�b�v1�̃n���h�����폜
	}

	for (int mapCnt = 0; mapCnt < GAME_MAP_2_YOKO_MAX * GAME_MAP_2_TATE_MAX; mapCnt++)
	{
		DeleteGraph(MapImage_W[GAME_MAP_SCENE_F1].Handle[mapCnt]);	//�}�b�v2�̃n���h�����폜
	}

	for (int mapCnt = 0; mapCnt < GAME_MAP_2_YOKO_MAX * GAME_MAP_2_TATE_MAX; mapCnt++)
	{
		DeleteGraph(MapImage_W[GAME_MAP_SCENE_F2].Handle[mapCnt]);	//�}�b�v2�̃n���h�����폜
	}

	for (int mapCnt = 0; mapCnt < GAME_MAP_2_YOKO_MAX * GAME_MAP_2_TATE_MAX; mapCnt++)
	{
		DeleteGraph(MapImage_W[GAME_MAP_SCENE_F3].Handle[mapCnt]);	//�}�b�v2�̃n���h�����폜
	}

	for (int mapCnt = 0; mapCnt < GAME_MAP_2_YOKO_MAX * GAME_MAP_2_TATE_MAX; mapCnt++)
	{
		DeleteGraph(MapImage_W[GAME_MAP_SCENE_F4].Handle[mapCnt]);	//�}�b�v2�̃n���h�����폜
	}

	for (int mapCnt = 0; mapCnt < GAME_MAP_2_YOKO_MAX * GAME_MAP_2_TATE_MAX; mapCnt++)
	{
		DeleteGraph(MapImage_W[GAME_MAP_SCENE_BOSS].Handle[mapCnt]);	//�}�b�v2�̃n���h�����폜
	}

	for (int mapCnt = 0; mapCnt < GAME_MAP_4_YOKO_MAX * GAME_MAP_4_TATE_MAX; mapCnt++)
	{
		DeleteGraph(MapImage_S[GAME_MAP_SCENE_F1].Handle[mapCnt]);	//�}�b�v4�̃n���h�����폜
	}

	for (int mapCnt = 0; mapCnt < GAME_MAP_4_YOKO_MAX * GAME_MAP_4_TATE_MAX; mapCnt++)
	{
		DeleteGraph(MapImage_S[GAME_MAP_SCENE_F2].Handle[mapCnt]);	//�}�b�v4�̃n���h�����폜
	}

	for (int mapCnt = 0; mapCnt < GAME_MAP_4_YOKO_MAX * GAME_MAP_4_TATE_MAX; mapCnt++)
	{
		DeleteGraph(MapImage_S[GAME_MAP_SCENE_F3].Handle[mapCnt]);	//�}�b�v4�̃n���h�����폜
	}

	for (int mapCnt = 0; mapCnt < GAME_MAP_4_YOKO_MAX * GAME_MAP_4_TATE_MAX; mapCnt++)
	{
		DeleteGraph(MapImage_S[GAME_MAP_SCENE_F4].Handle[mapCnt]);	//�}�b�v4�̃n���h�����폜
	}

	for (int mapCnt = 0; mapCnt < GAME_ITEM_BUN_YOKO_CNT * GAME_ITEM_BUN_TATE_CNT; mapCnt++)
	{
		DeleteGraph(ItemImage_1[GAME_MAP_SCENE_F1].Handle[mapCnt]);	//	�A�C�e���̃n���h�����폜
	}

	DeleteMusicMem(MUSIC_MY_TITLE.Handle);	    //���̃n���h�����폜
	DeleteMusicMem(MUSIC_MY_BGM_1.Handle);	    //���̃n���h�����폜
	DeleteMusicMem(MUSIC_MY_BOSS.Handle);		//���̃n���h�����폜

	DxLib_End();	//DX���C�u�����g�p�̏I������

	return 0;
}


//###### FPS�l���v���A�X�V����֐� #######
VOID MY_FPS_UPDATE(VOID)
{
	if (CountFps == 0)	 //1�t���[���ڂȂ玞�����L��
	{
		StartTimeFps = GetNowCount();
	}

	if (CountFps == SampleNumFps)	//60�t���[���ڂȂ畽�ς��v�Z
	{
		int now = GetNowCount();
		CalcFps = 1000.f / ((now - StartTimeFps) / (float)SampleNumFps);
		CountFps = 0;
		StartTimeFps = now;
	}
	CountFps++;
	return;
}

//########## FPS�l��`�悷��֐� #########
VOID MY_FPS_DRAW(VOID)
{
	//�������`��
	DrawFormatString(0, GAME_HEIGHT - 20, GetColor(0, 0, 0), "FPS:%.1f", CalcFps);
	return;
}

//####### FPS�l���v�����A�҂֐� #########
VOID MY_FPS_WAIT(VOID)
{
	int resultTime = GetNowCount() - StartTimeFps;	//������������
	int waitTime = CountFps * 1000 / GAME_FPS_SPEED - resultTime;	//�҂ׂ�����

	if (waitTime > 0)	//�w���FPS�l���������ꍇ
	{
		Sleep(waitTime);	//�҂�
	}
	return;

}

//####### �L�[���͏�Ԃ��X�V����֐� ######
VOID MY_ALL_KEYDOWN_UPDATE(VOID)
{
	char TempKey[256];	//�ꎞ�I�ɁA���݂̃L�[�̓��͏�Ԃ��i�[����

	GetHitKeyStateAll(TempKey);	//���ׂẴL�[�̓��͏�Ԃ𓾂�

	for (int i = 0; i < 256; i++)
	{
		if (TempKey[i] != 0)	//������Ă���L�[�̃L�[�R�[�h�������Ă���Ƃ�
		{
			AllKeyState[i]++;	//������Ă���
		}
		else
		{
			AllKeyState[i] = 0;	//������Ă��Ȃ�
		}
	}
	return;
}

//######## �^�C�g����ʂ̊֐� #############
VOID MY_GAME_TITLE(VOID)
{

	//BGM������Ă��Ȃ��Ƃ�
	if (CheckSoundMem(MUSIC_MY_TITLE.Handle) == 0)
	{
		ChangeVolumeSoundMem(255 * 50 / 100, MUSIC_MY_TITLE.Handle);	//BGM�̉��ʂ�50���ɂ���
		PlaySoundMem(MUSIC_MY_TITLE.Handle, DX_PLAYTYPE_LOOP);			//BGM�𗬂�
	}

	if (AllKeyState[KEY_INPUT_RETURN] != 0)
	{
		if (MY_PLAY_INIT() == TRUE)
		{
			GameSceneNow = (int)GAME_SCENE_PUOLOGUE;	//�v�����[�O��ʂɑJ��
		}
	}


	DrawGraph(BackGround.X, BackGround.Y, BackGround.Handle, TRUE);		//�^�C�g���w�i�摜�`��

	DrawGraph(BackGround_T.X, BackGround_T.Y, BackGround_T.Handle, TRUE);		//�^�C�g���摜�`��

	DrawString(0, 0, "�^�C�g�����(�G���^�[�L�[�������Ă�������)", GetColor(0, 0, 0));
	return;
}


//####### �v�����[�O��ʂ̊֐� ############# 
VOID MY_GAME_PROLOGUE(VOID)
{

	//BGM������Ă��Ȃ��Ƃ�
	if (CheckSoundMem(MUSIC_MY_TITLE.Handle) == 0)
	{
		ChangeVolumeSoundMem(255 * 50 / 100, MUSIC_MY_TITLE.Handle);	//BGM�̉��ʂ�50���ɂ���
		PlaySoundMem(MUSIC_MY_TITLE.Handle, DX_PLAYTYPE_LOOP);			//BGM�𗬂�
	}

	if (AllKeyState[KEY_INPUT_SPACE] != 0)
	{
		GameSceneNow = (int)GAME_SCENE_PLAY;	//�v���C��ʂɑJ��
	}

	DrawGraph(BackGround.X, BackGround.Y, BackGround.Handle, TRUE);		//�^�C�g���w�i�摜�`��

	MY_PLAY_BACKIMAGE_DRAW(); //�v�����[�O�摜���X�N���[��

	DrawString(0, 550, "SPACE�ŃX�L�b�v", GetColor(0, 0, 0));

	return;
}

//########### �v���C��ʂ̊֐� ############
VOID MY_GAME_PLAY(VOID)
{
	StopSoundMem(MUSIC_MY_TITLE.Handle);

	//BGM������Ă��Ȃ��Ƃ�
	if (CheckSoundMem(MUSIC_MY_BGM_1.Handle) == 0)
	{
		ChangeVolumeSoundMem(255 * 50 / 100, MUSIC_MY_BGM_1.Handle);	//BGM�̉��ʂ�50���ɂ���
		PlaySoundMem(MUSIC_MY_BGM_1.Handle, DX_PLAYTYPE_LOOP);			//BGM�𗬂�
	}

	MY_PLAY_PLAYER_OPERATION();

	MY_PLAY_ENEMY_OPERATION();			//�S�`��

	MY_PLAY_MAP_DRAW(MapImage_U[0]);	//�}�b�v��`��

	MY_PLAY_MAP_DRAW(MapImage_W[MapNowPos]);	//�}�b�v��`��

	MY_PLAY_MAP_DRAW(MapImage_S[MapNowPos]);	//�}�b�v��`��

	MY_PLAY_MAP_DRAW_ATARI(&MapImage_A[MapNowPos]); //�����蔻��̐ݒ�

	MY_PLAY_MAP_DRAW(ItemImage_1[MapNowPos]);	//�A�C�e����`��

	MY_PLAY_PLAYER_DRAW(Myplayer);  //�v���C���[��`��

	//if (MapNowPos == (int)GAME_MAP_SCENE_BOSS) {
	MY_PLAY_ENEMY_DRAW(&oni);
	//}

	MY_PLAY_PLAYER_GETITEM();     //�A�C�e���̎擾

	MY_MAP_SCENE_MOVE();  //�}�b�v��؂�ւ���





	//�����Ă���A�C�e����\��
	if (AllKeyState[KEY_INPUT_I] == 1)
	{
		if (!itemdrowflag)
		{
			itemdrowflag = true;
		}
		else
		{
			itemdrowflag = false;
		}
	}
	if (itemdrowflag)
	{
		for (int i = 0; i < GAME_MAP_ITEM_KIND; i++)
		{
			if (Myplayer.item[i] != 0)
			{
				DrawFormatString(0, i * 20 + 50, GetColor(255, 255, 255), "%s", ItemName[i]);
			}
		}
	}







	DrawString(0, 0, "�v���C���(A�L�[�������Ă�������)", GetColor(255, 255, 255));

	if (AllKeyState[KEY_INPUT_A] != 0)
	{
		GameSceneNow = (int)GAME_SCENE_CLEAR;
	}
}


VOID MY_GAME_GAMEOVER(VOID)
{

	if (AllKeyState[KEY_INPUT_BACK] != 0)
	{
		GameSceneNow = (int)GAME_SCENE_TITLE;
	}


	DrawString(400, 300, "GAME OVER(�o�b�N�X�y�[�X�L�[->�^�C�g����ʂɖ߂�)", GetColor(255, 255, 255));

}

VOID MY_GAME_CLEAR(VOID)
{
	BOOL IsAtari = FALSE;  //�����蔻��

	if (AllKeyState[KEY_INPUT_BACK] != 0)
	{
		GameSceneNow = (int)GAME_SCENE_TITLE;
	}

	DrawString(0, 0, "�N���A���(�o�b�N�X�y�[�X�L�[�������Ă�������)", GetColor(255, 255, 255));

	return;
}

//########## �������֐� ##########
BOOL MY_PLAY_INIT(VOID)
{
	ScrollCntYoko = 0;	//�X�N���[���ʂ�������
	ScrollCntTate = 0;

	//�v���C���[�̉摜�̔ԍ���ݒ�
	int StartNum = (int)CHARA_KIND_5;
	int soeji = 0;
	PlayerImageNum[soeji++] = StartNum + 0;
	PlayerImageNum[soeji++] = StartNum + 1;
	PlayerImageNum[soeji++] = StartNum + 2;
	PlayerImageNum[soeji++] = StartNum + 12;
	PlayerImageNum[soeji++] = StartNum + 13;
	PlayerImageNum[soeji++] = StartNum + 14;
	PlayerImageNum[soeji++] = StartNum + 24;
	PlayerImageNum[soeji++] = StartNum + 25;
	PlayerImageNum[soeji++] = StartNum + 26;
	PlayerImageNum[soeji++] = StartNum + 36;
	PlayerImageNum[soeji++] = StartNum + 37;
	PlayerImageNum[soeji++] = StartNum + 38;

	//�v���C���[��������
	if (MY_PLAYER_INIT(&Myplayer, CharaImage, &PlayerImageNum[0], GAME_MAP_YOKO_SIZE*GAME_CHARA_START_X, GAME_MAP_TATE_SIZE*GAME_CHARA_START_Y, GAME_CHARA_SPEED) == FALSE) {
		MessageBox(NULL, "CHARA_INIT", "NotFound", MB_OK);
		return FALSE;
	}

	if (MY_INIT_ENEMY(&oni, BossImage, &BossImageNum[0], GAME_BOSS_FIRST_MUKI_D,GAME_MAP_YOKO_SIZE * GAME_CHARA_START_X, GAME_MAP_TATE_SIZE * GAME_CHARA_START_Y, GAME_CHARA_SPEED) == FALSE) {
		MessageBox(NULL, "CHARA_INIT", "NotFound", MB_OK);
		return FALSE;
	}

	MY_PG_INIT(); //�v�����[�O�摜�ʒu������

	return TRUE;
}

//########## �v���C���[������������֐� ##########
//���@���FCHARADATA �\���́F�ݒ肷��CHARADATA�\����
//���@���FCHARAIMAGE�\���́F�ݒ肷��CHARAIMAGE�\����
//���@���Fint* �@�@ �@�@�@�F�g�p����摜�̔ԍ��i�z��̐擪�A�h���X�������Ƃ���j
//���@���Fint�@	�@�@�@�@�@�F�摜�̏����ʒuX
//���@���Fint�@	�@�@�@�@�@�F�摜�̏����ʒuY
//���@���Fint�@	�@�@�@�@�@�F�ړ��X�s�[�h
//�߂�l�FBOOL�F�G���[���FFALSE
BOOL MY_PLAYER_INIT(CHARADATA *charadata, CHARAIMAGE charaimage, int *num, int x, int y, int speed)
{
	//*(num+0)�Δz��̐擪�A�h���X
	for (int mot = 0; mot < GAME_CHARA_MOTION_NUM; mot++)
	{
		charadata->Handle[mot] = charaimage.Handle[*(num + mot)];	//�摜�̃n���h��������
	}

	charadata->X = x;
	charadata->Y = y;
	charadata->Width = charaimage.Width[*(num + 0)];      //�ŏ��̉摜�̉�����ݒ肷��
	charadata->Height = charaimage.Height[*(num + 0)];	  //�ŏ��̉摜�̍�����ݒ肷��
	charadata->C_Width = charaimage.C_Width[*(num + 0)];  //�ŏ��̉摜�̉����̒��S��ݒ肷��
	charadata->C_Height = charaimage.C_Height[*(num + 0)]; //�ŏ��̉摜�̍�����ݒ肷��

	//�}�b�v�������Ɠ����傫���ɂ���
	charadata->Width = GAME_MAP_YOKO_SIZE;
	charadata->Height = GAME_MAP_TATE_SIZE;
	charadata->C_Width = GAME_MAP_YOKO_SIZE / 2;
	charadata->C_Height = GAME_MAP_TATE_SIZE / 2;

	charadata->NowHandleNum = 6;	//�O�����̍ŏ��̉摜
	charadata->NowHandleCnt = 0;	//�摜�J�E���^��������

	charadata->NowHandleCntMAX = 6; //�摜�J�E���^MAX��������

	//*************  �p�����[�^�ݒ�  ********************************
	charadata->Speed = speed;

	charadata->MoveDistX = x;		//���̋������}�b�v�̍ŏ����瓮���������Ƃ��Đݒ肷��
	charadata->MoveDistY = y;

	charadata->CanMoveUp = TRUE;		//��Ɉړ��ł���
	charadata->CanMoveDown = TRUE;		//���Ɉړ��ł���
	charadata->CanMoveLeft = TRUE;		//���Ɉړ��ł���
	charadata->CanMoveRight = TRUE;		//�E�Ɉړ��ł���

	charadata->ScrollOK_X = FALSE;	//�ړ��ł��Ȃ�
	charadata->ScrollOK_Y = FALSE;

	charadata->atariX = 4;				//�����蔻���X�ʒu�𒚓x�ǂ��ݒ�
	charadata->atariY = 10;				//�����蔻���Y�ʒu�𒚓x�ǂ��ݒ�
	charadata->atariWidth = 18;			//�����蔻��̕��𒚓x�ǂ��ݒ�
	charadata->atariHeight = 24;		//�����蔻��̍����𒚓x�ǂ��ݒ�



	//�A�C�e���̏�����
	for (int kind = 0; kind < (int)GAME_MAP_ITEM_KIND; kind++)
	{
		charadata->item[kind] = 0;	//�A�C�e�������������Ă��Ȃ�
	}

	MY_SET_PLAYER_ATARI(charadata);	//�v���C���[�̓����蔻��̗̈��ݒ�

	return TRUE;
}

//########## �G������������֐� ##########
//���@���FENEMY �\���́@  �F�ݒ肷��ENEMY�\����
//���@���FCHAR�\���́@�@�@�F�ݒ肷��CHARA�\����
//���@���Fint* �@�@ �@�@�@�F�ŏ��̉摜�̔ԍ��i�z��̐擪�A�h���X�������Ƃ���j
//���@���Fint�@	�@�@�@�@�@�F�ŏ��̉摜�̌���
//���@���Fint�@	�@�@�@�@�@�F�G�̍ŏ��̈ʒuX
//���@���Fint�@	�@�@�@�@�@�F�G�̍ŏ��̈ʒuY
//���@���Fint�@	�@�@�@�@�@�F�v���C���[������X�ʒu�܂ŗ���ƓG���\�������
//���@���Fint�@	�@�@�@�@�@�F�v���C���[������Y�ʒu�܂ŗ���ƓG���\�������
//���@���Fint�@	�@�@�@�@�@�F����
//���@���Fint�@	�@�@�@�@�@�F�ړ��X�s�[�h
//���@���FBOOL�@	�@�@�@�F��s�ł��邩
//�߂�l�FBOOL�F�G���[���FFALSE
BOOL MY_INIT_ENEMY(BOSS *e, CHARAIMAGE c, int *num, int Muki, int x, int y, int speed)
{
	//*(num + 0)�͔z��̐擪�A�h���X

	for (int mot = 0; mot < GAME_ENE_BOSS_MOTION_NUM; mot++)
	{
		e->Handle[mot] = c.Handle[*(num + mot)];	//�摜�̃n���h��������
	}

	e->X = x;								//�G�̍ŏ��̈ʒuX
	e->Y = y;								//�G�̍ŏ��̈ʒuY
	e->SetFirstX = x;						//�G�̏����\���ʒuX
	e->SetFirstY = y;						//�G�̏����\���ʒuY


	e->Width = c.Width[*(num + 0)];			//�ŏ��̉摜�̉�����ݒ肷��
	e->Height = c.Height[*(num + 0)];		//�ŏ��̉摜�̍�����ݒ肷��
	e->C_Width = c.C_Width[*(num + 0)];		//�ŏ��̉摜�̉����̒��S��ݒ肷��
	e->C_Height = c.C_Height[*(num + 0)];	//�ŏ��̉摜�̍����̒��S��ݒ肷��

	//�}�b�v�ЂƂ�����Ɠ����傫���ɂ���
	e->Width = GAME_MAP_YOKO_SIZE;
	e->Height = GAME_MAP_TATE_SIZE;
	e->C_Width = GAME_MAP_YOKO_SIZE / 2;
	e->C_Height = GAME_MAP_TATE_SIZE / 2;

	e->NowHandleNum = Muki;	//�ŏ��̉摜�̌����̐ݒ�
	e->muki = Muki;			//�G�̌���
	e->SetFirstmuki = Muki;	//�G�̍ŏ��̌���

	e->NowHandleCnt = 0;	//�摜�J�E���^(�摜���ς�鎞��)��������
	e->NowHandleCntMAX = 4;	//�摜�J�E���^(�摜���ς�鎞��)MAX��������

	//***** �ȉ��A�p�����[�^�ݒ� **************************************************
	e->Speed = speed;				//�ړ����x��ݒ肷��

	e->CanMoveLeft = TRUE;			//���Ɉړ��ł���
	e->CanMoveRight = TRUE;			//�E�Ɉړ��ł���

	e->IsAlive = TRUE;				//�G�͂܂������Ă���
	e->IsView = FALSE;				//�G�͕\���ł��Ȃ�


	e->atariX = 4;			//�����蔻���X�ʒu���A�C�C�����ɐݒ�	���摜�\���Ɠ����蔻���X�ʒu�������Ƃ́A����Ȃ�
	e->atariY = 10;			//�����蔻���Y�ʒu���A�C�C�����ɐݒ�	���摜�\���Ɠ����蔻���Y�ʒu�������Ƃ́A����Ȃ�
	e->atariWidth = 18;		//�����蔻��̕��@���A�C�C�����ɐݒ�	���摜�\���Ɠ����蔻��̕��������Ƃ́A����Ȃ�
	e->atariHeight = 24;	//�����蔻��̍������A�C�C�����ɐݒ�	���摜�\���Ɠ����蔻��̍����������Ƃ́A����Ȃ�

	MY_SET_ENEMY_ATARI(e);	//�G�̓����蔻��̗̈��ݒ肷��

	return TRUE;
}


//####### �v�����[�O�摜�ʒu������ ###########
VOID MY_PG_INIT(VOID)
{
	BackGround_P.X = -BackGround_P.Width;
	BackGround_P.Y = 0;
}

//####### �v�����[�O���X�N���[������֐� #########
VOID MY_PLAY_BACKIMAGE_DRAW(VOID)
{

	// �`��u�����h���[�h���A���t�@�u�����h�i�T�O���j�ɂ���
	SetDrawBlendMode(DX_BLENDMODE_ALPHA, 128);	//255��MAX�l

	DrawBox(0, GAME_HEIGHT / 8 * 1, GAME_WIDTH, GAME_HEIGHT / 8 * 7, GetColor(255, 255, 255), TRUE);

	//�`��u�����h���[�h���m�[�u�����h�ɂ���
	SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);

	DrawGraph(BackGround_P.X, BackGround_P.Y, BackGround_P.Handle, TRUE);	//�v�����[�O�摜�`��

	BackGround_P.X += ScrollDistPlusYoko;	//�w�i�̈ʒu�����炷



	return;
}

//########## �L�����N�^�[�ƃ}�b�v�̓����蔻�������֐�(���������ꏊ��m��) ##########
//���@���@�FRECT	�F�����蔻�������̈�(�L�����N�^�[)
//���@���@�FRECT	�F�����蔻�������̈�(�}�b�v)
//���@���@�Fint 	�F���������ꏊ(X�ʒu)
//���@���@�Fint 	�F���������ꏊ(Y�ʒu)
//�߂�l�@�F�������Ă���FTRUE / �������Ă��Ȃ� / FALSE
BOOL MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(RECT chara, RECT map[GAME_MAP_TATE][GAME_MAP_YOKO], int *atariX, int *atariY)
{
	for (int tate = 0; tate < GAME_MAP_TATE; tate++)
	{
		for (int yoko = 0; yoko < GAME_MAP_YOKO; yoko++)
		{
			//�L�����̓������Ă���ꏊ���擾
			if (MY_CHECK_RECT_ATARI(chara, map[tate][yoko]) == TRUE)
			{
				*atariY = tate;	//atariY�̃A�h���X���w����̏ꏊ�ɁA�����������m�̏c�̈ʒu������
				*atariX = yoko;	//atariX�̃A�h���X���w����̏ꏊ�ɁA�����������m�̏c�̈ʒu������

				return TRUE;
			}
		}
	}
	return FALSE;	//�������ĂȂ�
}

//########## �v���C���[��BOSS�̓����蔻�������֐�(���������ꏊ��m��) ##########
//���@���@�FRECT	�F�����蔻�������̈�(�L�����N�^�[)
//���@���@�FRECT	�F�����蔻�������̈�(BOSS)
//���@���@�Fint 	�F���������ꏊ(X�ʒu)
//���@���@�Fint 	�F���������ꏊ(Y�ʒu)
//�߂�l�@�F�������Ă���FTRUE / �������Ă��Ȃ� / FALSE
BOOL MY_CHECK_RECT_ATARI_PLAYER_BOSS_ATARIBASHO(RECT chara, RECT boss, int *atariX, int *atariY)
{
	for (int tate = 0; tate < GAME_MAP_TATE; tate++)
	{
		for (int yoko = 0; yoko < GAME_MAP_YOKO; yoko++)
		{
			//�L�����̓������Ă���ꏊ���擾
			if (MY_CHECK_RECT_ATARI(chara, boss) == TRUE)
			{
				*atariY = tate;	//atariY�̃A�h���X���w����̏ꏊ�ɁA�����������m�̏c�̈ʒu������
				*atariX = yoko;	//atariX�̃A�h���X���w����̏ꏊ�ɁA�����������m�̏c�̈ʒu������

				return TRUE;
			}
		}
	}
	return FALSE;	//�������ĂȂ�
}


//######### �̈�̓����蔻�������֐� #########
BOOL MY_CHECK_RECT_ATARI(RECT a, RECT b)
{
	if (a.left<b.right&&
		a.top<b.bottom&&
		a.right>b.left&&
		a.bottom>b.top
		)
	{
		return TRUE;	//�������Ă���
	}

	return FALSE;	//�������Ă��Ȃ�
}

//########## �v���C���[�̓����蔻��̗̈��ݒ肷��֐� ###########
VOID MY_SET_PLAYER_ATARI(CHARADATA *charadata)
{
	//�����蔻��̗̈��ݒ�
	charadata->atariRect.left = charadata->X + charadata->atariX + 2;								//���݂�X�ʒu�{�����蔻���X�̈ʒu
	charadata->atariRect.top = charadata->Y + charadata->atariY + 2;								//���݂�Y�ʒu�{�����蔻���Y�̈ʒu
	charadata->atariRect.right = charadata->X + charadata->atariX + charadata->atariWidth - 2;		//���݂�X�ʒu�{�����蔻���X�̈ʒu�{�����蔻��̕�
	charadata->atariRect.bottom = charadata->Y + charadata->atariY + charadata->atariHeight - 2;	//���݂�Y�ʒu�{�����蔻���Y�̈ʒu�{�����蔻��̍���

	return;
}

//########## �G�̓����蔻��̗̈��ݒ肷��֐� ##########
VOID MY_SET_ENEMY_ATARI(BOSS *e)
{
	//�����蔻��̗̈�̐ݒ�
	e->atariRect.left = e->X + e->atariX - ScrollCntYoko;						//���݂�X�ʒu �{ �����蔻���X�ʒu	- �X�N���[����������߂�
	e->atariRect.top = e->Y + e->atariY;										//���݂�Y�ʒu �{ �����蔻���Y�ʒu
	e->atariRect.right = e->X + e->atariX + e->atariWidth - ScrollCntYoko - 1;	//���݂�X�ʒu �{ �����蔻���X�ʒu �{ �����蔻��̕� - �X�N���[����������߂�
	e->atariRect.bottom = e->Y + e->atariY + e->atariHeight - 1;				//���݂�Y�ʒu �{ �����蔻���Y�ʒu �{ �����蔻��̍���

	return;
}

//########## �v���C���[�𑀍삷��֐� ###########
VOID MY_PLAY_PLAYER_OPERATION(VOID)
{
	int retAtariX = 0;  //�������Ă���}�b�v�̏ꏊ
	int retAtariY = 0;

	BOOL IsKeyDown = MY_PLAY_PLAYER_OPERATION_KEY(&retAtariX, &retAtariY);	//�L�[�������Ă��邩���f

	return;
}

//########### �v���C���[���L�[���삷��֐� #########

BOOL MY_PLAY_PLAYER_OPERATION_KEY(int *x, int *y)
{
	BOOL IsKeyDown = FALSE;	//�L�[�������ꂽ��

	if (AllKeyState[KEY_INPUT_LEFT] != 0)	//�����L�[��������Ă����Ƃ�
	{
		IsKeyDown = TRUE;	//�L�[�������ꂽ

		Myplayer.CanMoveLeft = TRUE;	//�������ɁA�܂�������

		MY_SET_PLAYER_ATARI(&Myplayer);	//�v���C���[�̓����蔻��̈��ݒ�
		Myplayer.atariRect.left -= 4;	//���������蔻��̗̈�����ɂ��炷
		Myplayer.atariRect.right -= 4;	//���������蔻��̗̈�����ɂ��炷

		if (MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(Myplayer.atariRect, MapImage_A[MapNowPos].rect_NG, x, y) == TRUE)
		{
			Myplayer.CanMoveLeft = FALSE;	//	���ɍs���Ȃ�
		}


		if (Myplayer.CanMoveLeft == TRUE)	//���Ɉړ��ł���Ƃ�
		{
			if (Myplayer.ScrollOK_X == FALSE)	//�X�N���[���ł��Ȃ��Ƃ�
			{
				if (Myplayer.X > 0)
				{
					Myplayer.X -= Myplayer.Speed;	//�v���C���[�����Ɉړ�
				}
			}
			else   //�X�N���[���ł���Ƃ�
			{
				if (ScrollCntYoko > 0)  //�}�b�v�O�փX�N���[�����Ȃ�
				{
					ScrollCntYoko -= Myplayer.Speed;	//��ʂ����ɃX�N���[��
					oni.bossimage.X[0] += oni.Speed;
				}
			}

			if (Myplayer.MoveDistX > 0)
			{
				Myplayer.MoveDistX -= Myplayer.Speed;
			}

		}
	}
	if (AllKeyState[KEY_INPUT_RIGHT] != 0)	//�E���L�[��������Ă�����
	{
		IsKeyDown = TRUE;

		Myplayer.CanMoveRight = TRUE;

		MY_SET_PLAYER_ATARI(&Myplayer);	//�v���C���[�̓����蔻��̗̈��ݒ�
		Myplayer.atariRect.left += 4;	//�����A�v���C���[�̓����蔻��̗̈���E�ɂ��炷
		Myplayer.atariRect.right += 4;	//�����A�v���C���[�̓����蔻��̗̈���E�ɂ��炷

		if (MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(Myplayer.atariRect, MapImage_A[MapNowPos].rect_NG, x, y) == TRUE)	//�E�ɍs���Ȃ����̂Ɠ��������Ƃ�
		{
			Myplayer.CanMoveRight = FALSE;	//�E�ɍs���Ȃ�
		}


		if (Myplayer.CanMoveRight == TRUE)
		{
			if (Myplayer.ScrollOK_X == FALSE)
			{
				if (Myplayer.X + Myplayer.Width < GAME_WIDTH)
				{
					Myplayer.X += Myplayer.Speed;
				}
			}
			else
			{
				if (ScrollCntYoko < GAME_MAP_YOKO_SIZE*GAME_MAP_YOKO)
				{
					ScrollCntYoko += Myplayer.Speed;
					oni.bossimage.X[0] -= oni.Speed;
				}
			}

			if (Myplayer.MoveDistX < GAME_MAP_YOKO_SIZE*GAME_MAP_YOKO)
			{
				Myplayer.MoveDistX += Myplayer.Speed;
			}
		}
	}

	if (AllKeyState[KEY_INPUT_UP] != 0)		//����L�[��������Ă���Ƃ�
	{
		IsKeyDown = TRUE;

		Myplayer.CanMoveUp = TRUE;	//������ɂ܂�������

		MY_SET_PLAYER_ATARI(&Myplayer);
		Myplayer.atariRect.top -= 4;
		Myplayer.atariRect.bottom -= 4;

		if (MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(Myplayer.atariRect, MapImage_A[MapNowPos].rect_NG, x, y) == TRUE)
		{
			Myplayer.CanMoveUp = FALSE;	//��ɍs���Ȃ�
		}


		if (Myplayer.CanMoveUp == TRUE)		//��Ɉړ��ł���Ƃ�
		{
			if (Myplayer.ScrollOK_Y == FALSE)
			{
				if (Myplayer.Y > 0)
				{
					Myplayer.Y -= Myplayer.Speed;
				}
			}
			else
			{
				if (ScrollCntTate > 0)
				{
					ScrollCntTate -= Myplayer.Speed;
					oni.bossimage.Y[0] += oni.Speed;
				}
			}

			if (Myplayer.MoveDistY > 0)
			{
				Myplayer.MoveDistY -= Myplayer.Speed;
			}
		}
	}


	if (AllKeyState[KEY_INPUT_DOWN] != 0)	//�����L�[��������Ă�����
	{
		IsKeyDown = TRUE;

		Myplayer.CanMoveDown = TRUE;

		Myplayer.CanMoveDown = TRUE;	//������ɂ܂�������

		MY_SET_PLAYER_ATARI(&Myplayer);
		Myplayer.atariRect.top += 4;
		Myplayer.atariRect.bottom += 4;

		if (MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(Myplayer.atariRect, MapImage_A[MapNowPos].rect_NG, x, y) == TRUE)
		{
			Myplayer.CanMoveDown = FALSE;	//��ɍs���Ȃ�
		}


		if (Myplayer.CanMoveDown == TRUE)	//���Ɉړ��ł���Ƃ�
		{
			if (Myplayer.ScrollOK_Y == FALSE)
			{
				if (Myplayer.Y + Myplayer.Width < GAME_HEIGHT)
				{
					Myplayer.Y += Myplayer.Speed;
				}
			}
			else
			{
				if (ScrollCntTate < GAME_MAP_TATE_SIZE*GAME_MAP_TATE)
				{
					ScrollCntTate += Myplayer.Speed;
					oni.bossimage.Y[0] -= oni.Speed;
				}
			}

			if (Myplayer.MoveDistY < GAME_MAP_TATE_SIZE*(GAME_MAP_TATE - 1))
			{
				Myplayer.MoveDistY += Myplayer.Speed;
			}
		}
	}

	//�}�b�v�̍����ɂ���Ƃ��́A�v���C���[�𓮂���
	if (Myplayer.MoveDistX > 0 &&
		Myplayer.MoveDistX <= GAME_MAP_YOKO_SIZE * 10)	//�v���C���[�̓��������������ȏ�ł����
	{
		Myplayer.ScrollOK_X = FALSE;					//�}�b�v���~�߂āA�v���C���[�𓮂���
	}

	//�}�b�v�̐^�񒆂�����ɂ���Ƃ��́A�}�b�v�𓮂���
	if (Myplayer.MoveDistX > GAME_MAP_YOKO_SIZE * 10 &&
		Myplayer.MoveDistX <= GAME_MAP_YOKO_SIZE * (GAME_MAP_YOKO - 15))
	{
		Myplayer.ScrollOK_X = TRUE;					//�}�b�v�𓮂���
	}

	//�}�b�v�̉E���ɂ���Ƃ��́A�v���C���[�𓮂���
	if (Myplayer.MoveDistX > GAME_MAP_YOKO_SIZE*(GAME_MAP_YOKO - 15) &&
		Myplayer.MoveDistX <= GAME_MAP_YOKO_SIZE * GAME_MAP_YOKO)
	{
		Myplayer.ScrollOK_X = FALSE;				//�}�b�v���~�߂āA�v���C���[�𓮂���
	}

	//�}�b�v�̏㑤�ɂ���Ƃ��́A�v���C���[�𓮂���
	if (Myplayer.MoveDistY > 0 &&
		Myplayer.MoveDistY <= GAME_MAP_TATE_SIZE * 10)
	{
		Myplayer.ScrollOK_Y = FALSE;				//�}�b�v���~�߂āA�v���C���[�𓮂���
	}

	//�}�b�v�̐^�񒆂�����ɂ���Ƃ��́A�}�b�v�𓮂���
	if (Myplayer.MoveDistY > GAME_MAP_TATE_SIZE * 10 &&
		Myplayer.MoveDistY <= GAME_MAP_TATE_SIZE * (GAME_MAP_TATE - 9))	//�v���C���[�̓��������������ȏ�ł����(�J�n�n�_)
	{
		Myplayer.ScrollOK_Y = TRUE;				//�}�b�v�𓮂���
	}

	//�}�b�v�̉����ɂ���Ƃ��́A�v���C���[�𓮂���
	if (Myplayer.MoveDistY > GAME_MAP_TATE_SIZE*(GAME_MAP_TATE - 9) &&	//�v���C���[�̓��������������ȏ�ł����(�I���n�_)
		Myplayer.MoveDistY <= GAME_MAP_TATE_SIZE * GAME_MAP_TATE)
	{
		Myplayer.ScrollOK_Y = FALSE;	//�}�b�v���~�߂āA�v���C���[�𓮂���
	}

	return IsKeyDown;
}

//########## �摜��ǂݍ��ސݒ������֐� ##########
//���@���F�摜�\���́@�F�ݒ肷��摜�\���̂̕ϐ�
//���@���Fint�@�F�摜�̉��̈ʒu
//���@���Fint�@�F�摜�̏c�̈ʒu
//���@���Fconst char *�F�ǂݍ��މ摜�̃t�@�C���p�X
//�߂�l�FBOOL�F�G���[���FFALSE
BOOL MY_GAZOU_LOAD(GAZOU *g, int x, int y, const char *path)
{
	wsprintf(g->FilePath, path);						//�t�@�C���p�X���R�s�[
	g->Handle = LoadGraph(g->FilePath);					//�摜���������ɓǂݍ��݁A�n���h�����擾

	if (g->Handle == -1) { return FALSE; }				//�摜�ǂݍ��݃G���[

	GetGraphSize(g->Handle, &g->Width, &g->Height);		//�摜�T�C�Y���擾
	g->X = x;
	g->Y = y;
	g->C_Width = g->Width / 2;							//�摜�̉��T�C�Y�̒��S���擾
	g->C_Height = g->Height / 2;						//�摜�̏c�T�C�Y�̒��S���擾

	return TRUE;
}

//########## MAP�𕪊����ēǂݍ��ސݒ������֐� ##########
//���@���FMAP�\���́@�F�ݒ肷��摜�\����(����)�̕ϐ�
//���@���Fint�@�F�摜�̕�����
//���@���Fint�@�F�摜�̉��̕�����
//���@���Fint�@�F�摜�̏c�̕�����
//���@���Fint�@�F�摜�̉��̕����T�C�Y
//���@���Fint�@�F�摜�̏c�̕����T�C�Y
//���@���Fconst char *�F�ǂݍ��މ摜�̃t�@�C���p�X
//�߂�l�FBOOL�F�G���[���FFALSE
BOOL MY_MAP_LOAD_BUNKATSU(MAP *m, int bun_num, int bun_x_num, int bun_y_num, int bun_width, int bun_height, const char *path)
{
	int ret = 0;
	//�摜���������ɕ������ēǂݍ��݁A�n���h�����擾
	ret = LoadDivGraph(path, bun_num, bun_x_num, bun_y_num, bun_width, bun_height, m->Handle);

	if (ret == -1) { return FALSE; }	//�摜�ǂݍ��݃G���[

	for (int cnt = 0; cnt < GAME_MAP_1_YOKO_MAX * GAME_MAP_1_TATE_MAX; cnt++)
	{
		//�摜�T�C�Y���擾
		GetGraphSize(
			m->Handle[cnt],		//�n���h������A�摜�̕��ƍ������擾
			&m->Width[cnt],		//MAP�\���̂̕��@�ɁA�摜�̕��@��ݒ肷��
			&m->Height[cnt]);	//MAP�\���̂̋t���ɁA�摜�̍�����ݒ肷��			

		m->C_Width[cnt] = m->Width[cnt] / 2;			//�摜�̉��T�C�Y�̒��S���擾
		m->C_Height[cnt] = m->Height[cnt] / 2;			//�摜�̏c�T�C�Y�̒��S���擾
	}

	return TRUE;
}

//########## MAP�𕪊����ēǂݍ��ސݒ������֐� ##########
//���@���FMAP�\���́@�F�ݒ肷��摜�\����(����)�̕ϐ�
//���@���Fint�@�F�摜�̕�����
//���@���Fint�@�F�摜�̉��̕�����
//���@���Fint�@�F�摜�̏c�̕�����
//���@���Fint�@�F�摜�̉��̕����T�C�Y
//���@���Fint�@�F�摜�̏c�̕����T�C�Y
//���@���Fconst char *�F�ǂݍ��މ摜�̃t�@�C���p�X
//�߂�l�FBOOL�F�G���[���FFALSE
BOOL MY_MAP_A_LOAD_BUNKATSU(MAP *m, int bun_num, int bun_x_num, int bun_y_num, int bun_width, int bun_height, const char *path)
{
	int ret = 0;
	//�摜���������ɕ������ēǂݍ��݁A�n���h�����擾
	ret = LoadDivGraph(path, bun_num, bun_x_num, bun_y_num, bun_width, bun_height, m->Handle);

	if (ret == -1) { return FALSE; }	//�摜�ǂݍ��݃G���[

	for (int cnt = 0; cnt < GAME_MAP_1_YOKO_MAX * GAME_MAP_1_TATE_MAX; cnt++)
	{
		//�摜�T�C�Y���擾
		GetGraphSize(
			m->Handle[cnt],		//�n���h������A�摜�̕��ƍ������擾
			&m->Width[cnt],		//MAP�\���̂̕��@�ɁA�摜�̕��@��ݒ肷��
			&m->Height[cnt]);	//MAP�\���̂̋t���ɁA�摜�̍�����ݒ肷��			

		m->C_Width[cnt] = m->Width[cnt] / 2;			//�摜�̉��T�C�Y�̒��S���擾
		m->C_Height[cnt] = m->Height[cnt] / 2;			//�摜�̏c�T�C�Y�̒��S���擾
	}

	return TRUE;
}


//########## MAP�𕪊����ēǂݍ��ސݒ������֐� ##########
//���@���FMAP�\���́@�F�ݒ肷��摜�\����(����)�̕ϐ�
//���@���Fint�@�F�摜�̕�����
//���@���Fint�@�F�摜�̉��̕�����
//���@���Fint�@�F�摜�̏c�̕�����
//���@���Fint�@�F�摜�̉��̕����T�C�Y
//���@���Fint�@�F�摜�̏c�̕����T�C�Y
//���@���Fconst char *�F�ǂݍ��މ摜�̃t�@�C���p�X
//�߂�l�FBOOL�F�G���[���FFALSE
BOOL MY_MAP_2_LOAD_BUNKATSU(MAP *m, int bun_num, int bun_x_num, int bun_y_num, int bun_width, int bun_height, const char *path)
{
	int ret = 0;
	wsprintf(m->FilePath, path);						//�t�@�C���p�X���R�s�[

														//�摜���������ɕ������ēǂݍ��݁A�n���h�����擾
	ret = LoadDivGraph(m->FilePath, bun_num, bun_x_num, bun_y_num, bun_width, bun_height, m->Handle);

	if (ret == -1) { return FALSE; }	//�摜�ǂݍ��݃G���[

	for (int cnt = 0; cnt < GAME_MAP_2_YOKO_MAX * GAME_MAP_2_TATE_MAX; cnt++)
	{
		//�摜�T�C�Y���擾
		GetGraphSize(
			m->Handle[cnt],		//�n���h������A�摜�̕��ƍ������擾
			&m->Width[cnt],		//MAP�\���̂̕��@�ɁA�摜�̕��@��ݒ肷��
			&m->Height[cnt]);	//MAP�\���̂̋t���ɁA�摜�̍�����ݒ肷��			

		m->C_Width[cnt] = m->Width[cnt] / 2;			//�摜�̉��T�C�Y�̒��S���擾
		m->C_Height[cnt] = m->Height[cnt] / 2;			//�摜�̏c�T�C�Y�̒��S���擾
	}

	return TRUE;
}

//########## MAP�𕪊����ēǂݍ��ސݒ������֐� ##########
//���@���FMAP�\���́@�F�ݒ肷��摜�\����(����)�̕ϐ�
//���@���Fint�@�F�摜�̕�����
//���@���Fint�@�F�摜�̉��̕�����
//���@���Fint�@�F�摜�̏c�̕�����
//���@���Fint�@�F�摜�̉��̕����T�C�Y
//���@���Fint�@�F�摜�̏c�̕����T�C�Y
//���@���Fconst char *�F�ǂݍ��މ摜�̃t�@�C���p�X
//�߂�l�FBOOL�F�G���[���FFALSE
BOOL MY_MAP_3_LOAD_BUNKATSU(MAP *m, int bun_num, int bun_x_num, int bun_y_num, int bun_width, int bun_height, const char *path)
{
	int ret = 0;
	wsprintf(m->FilePath, path);						//�t�@�C���p�X���R�s�[

														//�摜���������ɕ������ēǂݍ��݁A�n���h�����擾
	ret = LoadDivGraph(m->FilePath, bun_num, bun_x_num, bun_y_num, bun_width, bun_height, m->Handle);

	if (ret == -1) { return FALSE; }	//�摜�ǂݍ��݃G���[

	for (int cnt = 0; cnt < GAME_MAP_3_YOKO_MAX * GAME_MAP_3_TATE_MAX; cnt++)
	{
		//�摜�T�C�Y���擾
		GetGraphSize(
			m->Handle[cnt],		//�n���h������A�摜�̕��ƍ������擾
			&m->Width[cnt],		//MAP�\���̂̕��@�ɁA�摜�̕��@��ݒ肷��
			&m->Height[cnt]);	//MAP�\���̂̋t���ɁA�摜�̍�����ݒ肷��			

		m->C_Width[cnt] = m->Width[cnt] / 2;			//�摜�̉��T�C�Y�̒��S���擾
		m->C_Height[cnt] = m->Height[cnt] / 2;			//�摜�̏c�T�C�Y�̒��S���擾
	}

	return TRUE;
}

//########## MAP�𕪊����ēǂݍ��ސݒ������֐� ##########
//���@���FMAP�\���́@�F�ݒ肷��摜�\����(����)�̕ϐ�
//���@���Fint�@�F�摜�̕�����
//���@���Fint�@�F�摜�̉��̕�����
//���@���Fint�@�F�摜�̏c�̕�����
//���@���Fint�@�F�摜�̉��̕����T�C�Y
//���@���Fint�@�F�摜�̏c�̕����T�C�Y
//���@���Fconst char *�F�ǂݍ��މ摜�̃t�@�C���p�X
//�߂�l�FBOOL�F�G���[���FFALSE
BOOL MY_MAP_4_LOAD_BUNKATSU(MAP *m, int bun_num, int bun_x_num, int bun_y_num, int bun_width, int bun_height, const char *path)
{
	int ret = 0;
	wsprintf(m->FilePath, path);						//�t�@�C���p�X���R�s�[

														//�摜���������ɕ������ēǂݍ��݁A�n���h�����擾
	ret = LoadDivGraph(m->FilePath, bun_num, bun_x_num, bun_y_num, bun_width, bun_height, m->Handle);

	if (ret == -1) { return FALSE; }	//�摜�ǂݍ��݃G���[

	for (int cnt = 0; cnt < GAME_MAP_4_YOKO_MAX * GAME_MAP_4_TATE_MAX; cnt++)
	{
		//�摜�T�C�Y���擾
		GetGraphSize(
			m->Handle[cnt],		//�n���h������A�摜�̕��ƍ������擾
			&m->Width[cnt],		//MAP�\���̂̕��@�ɁA�摜�̕��@��ݒ肷��
			&m->Height[cnt]);	//MAP�\���̂̋t���ɁA�摜�̍�����ݒ肷��			

		m->C_Width[cnt] = m->Width[cnt] / 2;			//�摜�̉��T�C�Y�̒��S���擾
		m->C_Height[cnt] = m->Height[cnt] / 2;			//�摜�̏c�T�C�Y�̒��S���擾
	}

	return TRUE;
}

//########## CHARA�𕪊����ēǂݍ��ސݒ������֐� ##########
//���@���FCHARAIMAGE�\���́@�F�ݒ肷��CHARAIMAGE�\����(����)�̕ϐ�
//���@���Fint�@�F�摜�̕�����
//���@���Fint�@�F�摜�̉��̕�����
//���@���Fint�@�F�摜�̏c�̕�����
//���@���Fint�@�F�摜�̉��̕����T�C�Y
//���@���Fint�@�F�摜�̏c�̕����T�C�Y
//���@���Fconst char *�F�ǂݍ��މ摜�̃t�@�C���p�X
//�߂�l�FBOOL�F�G���[���FFALSE
BOOL MY_CHARA_LOAD_BUNKATSU(CHARAIMAGE *c, int bun_num, int bun_x_num, int bun_y_num, int bun_width, int bun_height, const char *path)
{
	int retLoad;

	wsprintf(c->FilePath, path);  //�t�@�C���̃p�X���R�s�[


	retLoad = LoadDivGraph(c->FilePath, bun_num, bun_x_num, bun_y_num, bun_width, bun_height, c->Handle);	//�摜���������ɕ������ēǂݍ��݁A�n���h�����擾

	if (retLoad == -1) { return FALSE; }	//�摜�ǂݍ��݃G���[

	//for (int cnt = 0; cnt < GAME_MAP_BUN_YOKO_CNT_MAX*GAME_MAP_BUN_TATE_CNT_MAX; cnt++)
	//{
	//	//�摜�T�C�Y���擾
	//	GetGraphSize(
	//		c->Handle[cnt],		//�n���h������A�摜�̕��ƍ������擾��
	//		&c->Width[cnt],		//MAP�\���̂̕��ɁA�摜�̕���ݒ肷��
	//		&c->Height[cnt]);	//MAP�\���̂̍����ɁA��m�̍�����ݒ肷��

	//	c->C_Width[cnt] = c->Width[cnt] / 2;	//�摜�̉��T�C�Y�̒��S�ʒu���擾
	//	c->C_Height[cnt] = c->Width[cnt] / 2;	//�摜�̏c�T�C�Y�̒��S�ʒu���擾
	//}

	for (int cnt = 0; cnt < bun_x_num * bun_y_num; cnt++)
	{
		//�摜�T�C�Y���擾
		GetGraphSize(
			c->Handle[cnt],		//�n���h������A�摜�̕��ƍ������擾��
			&c->Width[cnt],		//MAP�\���̂̕��ɁA�摜�̕���ݒ肷��
			&c->Height[cnt]);	//MAP�\���̂̍����ɁA��m�̍�����ݒ肷��

		c->C_Width[cnt] = c->Width[cnt] / 2;	//�摜�̉��T�C�Y�̒��S�ʒu���擾
		c->C_Height[cnt] = c->Height[cnt] / 2;	//�摜�̏c�T�C�Y�̒��S�ʒu���擾
	}


	return TRUE;
}



//########## �}�b�v(F1)����̎�ނ�ݒ肷�� ########
BOOL MY_MAP_READ_CSV_KIND_SET(MAP *mapdata)

{
	int Soeji;

	//�ʍs�ł���}�b�v
	Soeji = 0;
	mapdata->mapOKKind[Soeji++] = 4;
	mapdata->mapOKKind[Soeji++] = 5;	//�K�i�̒��S

	//�ʍs�ł����ނ̎c���-1�Ŗ��߂�
	Soeji = 0;
	for (int cnt = Soeji; cnt < GAME_MAP_OK_KIND; cnt++)
	{
		mapdata->mapOKKind[cnt] = -1;
	}

	//�ʍs�ł��Ȃ�
	Soeji = 0;
	mapdata->mapNGKind[Soeji++] = 0;
	//�ʍs�ł��Ȃ���ނ̎c���-1�Ŗ��߂�
	for (int cnt = Soeji; cnt < GAME_MAP_NG_KIND; cnt++)
	{
		mapdata->mapNGKind[cnt] = 0;
	}

	return TRUE;
}

//########## �Q�[���}�b�v��CSV��ǂݍ��ފ֐� ##########
BOOL MY_MAP_READ_CSV_NUM(MAP *mapdata, const char *path, const char *mapname)
{

	FILE  *fp;

	if ((fp = fopen(path, "r")) == NULL)	//�t�@�C����ǂݍ��݃��[�h(r)�ŊJ��
	{
		return FALSE;
	}//�ُ�I��	

	 //�������琳��ɓǂݍ��߂��Ƃ��̏���****************************************

	int result = 0;			//�t�@�C���̍Ōォ�`�F�b�N
	int LoopCnt = 0;		//���[�v�J�E���^

	//�t�@�C�����琔�l����ǂݍ���(%d,)�A�z��Ɋi�[����
	while (fscanf(fp, "%d,", &mapdata->data[LoopCnt / GAME_MAP_YOKO][LoopCnt % GAME_MAP_YOKO]) != EOF)	//End Of File�i�t�@�C���̍Ō�j�ł͂Ȃ��Ƃ��J��Ԃ�
	{
		mapdata->mapdate_Init[LoopCnt / GAME_MAP_YOKO][LoopCnt%GAME_MAP_YOKO]
			= mapdata->data[LoopCnt / GAME_MAP_YOKO][LoopCnt%GAME_MAP_YOKO];  //�l���R�s�[

		LoopCnt++;
	}
	fclose(fp);	//�t�@�C�������

	wsprintf(mapdata->name, mapname); //�}�b�v�̖��̂��R�s�[

	for (int tate = 0; tate < GAME_MAP_TATE; tate++)
	{
		for (int yoko = 0; yoko < GAME_MAP_YOKO; yoko++)
		{
			mapdata->rect_NG[tate][yoko].left = 0;
			mapdata->rect_NG[tate][yoko].top = 0;
			mapdata->rect_NG[tate][yoko].right = 0;
			mapdata->rect_NG[tate][yoko].bottom = 0;

			mapdata->rect_NG_First[tate][yoko] = mapdata->rect_NG[tate][yoko];

			mapdata->rect_OK[tate][yoko].left = 0;
			mapdata->rect_OK[tate][yoko].top = 0;
			mapdata->rect_OK[tate][yoko].right = 0;
			mapdata->rect_OK[tate][yoko].bottom = 0;

			mapdata->rect_OK_First[tate][yoko] = mapdata->rect_OK[tate][yoko];


		}
	}

	//�}�b�v�𓖂��蔻��̗̈�ɕϊ�
	int cnt;
	for (int tate = 0; tate < GAME_MAP_TATE; tate++)
	{
		for (int yoko = 0; yoko < GAME_MAP_YOKO; yoko++)
		{
			for (cnt = 0; cnt < GAME_MAP_NG_KIND; cnt++)	//�ʍs�ł��Ȃ��}�b�v
			{
				if (mapdata->data[tate][yoko] == mapdata->mapNGKind[cnt])
				{
					mapdata->rect_NG[tate][yoko].left = yoko * GAME_MAP_YOKO_SIZE + 1;
					mapdata->rect_NG[tate][yoko].top = tate * GAME_MAP_TATE_SIZE + 1;
					mapdata->rect_NG[tate][yoko].right = (yoko + 1) * GAME_MAP_YOKO_SIZE - 1;
					mapdata->rect_NG[tate][yoko].bottom = (tate + 1) * GAME_MAP_TATE_SIZE - 1;

					mapdata->rect_NG_First[tate][yoko] = mapdata->rect_NG[tate][yoko];	//�����ʒu��ݒ肷��
				}
			}


			for (cnt = 0; cnt < GAME_MAP_OK_KIND; cnt++)		//�ʍs�ł���}�b�v
			{
				if (mapdata->data[tate][yoko] == mapdata->mapOKKind[cnt])
				{
					mapdata->rect_OK[tate][yoko].left = yoko * GAME_MAP_YOKO_SIZE + 1;
					mapdata->rect_OK[tate][yoko].top = tate * GAME_MAP_TATE_SIZE + 1;
					mapdata->rect_OK[tate][yoko].right = (yoko + 1) * GAME_MAP_YOKO_SIZE - 1;
					mapdata->rect_OK[tate][yoko].bottom = (tate + 1) * GAME_MAP_TATE_SIZE - 1;

					mapdata->rect_OK_First[tate][yoko] = mapdata->rect_OK[tate][yoko];
				}
			}

			for (cnt = 0; cnt < GAME_MAP_ITEM_KIND; cnt++)		//�ʍs�ł���}�b�v
			{
				if (mapdata->data[tate][yoko] == MapItemKind[cnt])
				{
					mapdata->rectMap_Item[tate][yoko].left = yoko * GAME_MAP_YOKO_SIZE + 1;
					mapdata->rectMap_Item[tate][yoko].top = tate * GAME_MAP_TATE_SIZE + 1;
					mapdata->rectMap_Item[tate][yoko].right = (yoko + 1) * GAME_MAP_YOKO_SIZE - 1;
					mapdata->rectMap_Item[tate][yoko].bottom = (tate + 1) * GAME_MAP_TATE_SIZE - 1;

					mapdata->rectMap_Item_First[tate][yoko] = mapdata->rectMap_Item[tate][yoko];
				}
			}

			for (cnt = 0; cnt < GAME_MAP_KAIDAN; cnt++)		//�ʍs�ł���}�b�v
			{
				if (mapdata->data[tate][yoko] == MapKaidanKind[cnt])
				{
					mapdata->rectMap_Kaidan[tate][yoko].left = yoko * GAME_MAP_YOKO_SIZE + 1;
					mapdata->rectMap_Kaidan[tate][yoko].top = tate * GAME_MAP_TATE_SIZE + 1;
					mapdata->rectMap_Kaidan[tate][yoko].right = (yoko + 1) * GAME_MAP_YOKO_SIZE - 1;
					mapdata->rectMap_Kaidan[tate][yoko].bottom = (tate + 1) * GAME_MAP_TATE_SIZE - 1;

					mapdata->rectMap_Kaidan_First[tate][yoko] = mapdata->rectMap_Kaidan[tate][yoko];
				}
			}
		}
	}

	return TRUE;
}


//########## �}�b�v��\������֐� ##########
VOID MY_PLAY_MAP_DRAW(MAP MapImage)
{
	//�X�N���[������}�b�v��`��
	for (int tate = 0; tate < GAME_MAP_TATE; tate++)
	{
		for (int yoko = 0; yoko < GAME_MAP_YOKO; yoko++)
		{
			if ((yoko + 1) * GAME_MAP_YOKO_SIZE - ScrollCntYoko >= 0 &&
				(yoko + 0) * GAME_MAP_YOKO_SIZE - ScrollCntYoko <= GAME_WIDTH &&	//��ʂɎʂ��Ă���Ȃ�΂Ȃ��
				(tate + 1) * GAME_MAP_TATE_SIZE - ScrollCntTate >= 0 &&
				(tate + 0) * GAME_MAP_TATE_SIZE - ScrollCntTate <= GAME_HEIGHT
				) //��ʂɎʂ��Ă���Ȃ��
			{
				DrawGraph(
					yoko * GAME_MAP_YOKO_SIZE - ScrollCntYoko,			//�ʒu����X�N���[���ʂ�����
					tate * GAME_MAP_TATE_SIZE - ScrollCntTate,
					MapImage.Handle[MapImage.data[tate][yoko]], TRUE);	//�}�b�v���X�N���[�����Ȃ���`��

			}
		}
	}
}

//########## �}�b�v�̓����蔻���`�悷��֐� ##########
VOID MY_PLAY_MAP_DRAW_ATARI(MAP *map_naka)
{
	//�X�N���[������}�b�v��`��
	for (int tate = 0; tate < GAME_MAP_TATE; tate++)
	{
		for (int yoko = 0; yoko < GAME_MAP_YOKO; yoko++)
		{
			if ((yoko + 1) * GAME_MAP_YOKO_SIZE - ScrollCntYoko >= 0 &&
				(yoko + 0) * GAME_MAP_YOKO_SIZE - ScrollCntYoko <= GAME_WIDTH &&
				(tate + 1) * GAME_MAP_TATE_SIZE - ScrollCntTate >= 0 &&
				(tate + 0) * GAME_MAP_TATE_SIZE - ScrollCntTate <= GAME_HEIGHT
				)	//��ʂɎʂ��Ă���Ȃ��


				map_naka->rect_OK[tate][yoko].left = map_naka->rect_OK_First[tate][yoko].left - ScrollCntYoko;
			map_naka->rect_OK[tate][yoko].right = map_naka->rect_OK_First[tate][yoko].right - ScrollCntYoko;
			map_naka->rect_OK[tate][yoko].top = map_naka->rect_OK_First[tate][yoko].top - ScrollCntTate;
			map_naka->rect_OK[tate][yoko].bottom = map_naka->rect_OK_First[tate][yoko].bottom - ScrollCntTate;

			map_naka->rect_NG[tate][yoko].left = map_naka->rect_NG_First[tate][yoko].left - ScrollCntYoko;
			map_naka->rect_NG[tate][yoko].right = map_naka->rect_NG_First[tate][yoko].right - ScrollCntYoko;
			map_naka->rect_NG[tate][yoko].top = map_naka->rect_NG_First[tate][yoko].top - ScrollCntTate;
			map_naka->rect_NG[tate][yoko].bottom = map_naka->rect_NG_First[tate][yoko].bottom - ScrollCntTate;

			map_naka->rectMap_Item[tate][yoko].left = map_naka->rectMap_Item_First[tate][yoko].left - ScrollCntYoko;
			map_naka->rectMap_Item[tate][yoko].right = map_naka->rectMap_Item_First[tate][yoko].right - ScrollCntYoko;
			map_naka->rectMap_Item[tate][yoko].top = map_naka->rectMap_Item_First[tate][yoko].top - ScrollCntTate;
			map_naka->rectMap_Item[tate][yoko].bottom = map_naka->rectMap_Item_First[tate][yoko].bottom - ScrollCntTate;

			map_naka->rectMap_Kaidan[tate][yoko].left = map_naka->rectMap_Kaidan_First[tate][yoko].left - ScrollCntYoko;
			map_naka->rectMap_Kaidan[tate][yoko].right = map_naka->rectMap_Kaidan_First[tate][yoko].right - ScrollCntYoko;
			map_naka->rectMap_Kaidan[tate][yoko].top = map_naka->rectMap_Kaidan_First[tate][yoko].top - ScrollCntTate;
			map_naka->rectMap_Kaidan[tate][yoko].bottom = map_naka->rectMap_Kaidan_First[tate][yoko].bottom - ScrollCntTate;


		}
	}
}

//######### �v���C���[��\������֐� ###########
VOID MY_PLAY_PLAYER_DRAW(CHARADATA player)
{
	//�v���C���[��`��	
	DrawGraph(
		player.X,
		player.Y,
		player.Handle[player.NowHandleNum], TRUE);

	DrawBox(
	player.atariRect.left,
	player.atariRect.top,
	player.atariRect.right,
	player.atariRect.bottom,
	GetColor(0, 0, 255), FALSE);	//�g���`��


	if (AllKeyState[KEY_INPUT_LEFT] != 0)    //�����L�[��������Ă�����
	{
		if (Myplayer.NowHandleCnt < Myplayer.NowHandleCntMAX)
		{
			Myplayer.NowHandleCnt++;
		}
		else
		{
			Myplayer.NowHandleCnt = 0;

			if (Myplayer.NowHandleNum >= 9 && Myplayer.NowHandleNum < 11)
			{
				Myplayer.NowHandleNum++;	//���̍������̉摜
			}
			else
			{
				Myplayer.NowHandleNum = 9; //��ԍŏ��̍������̉摜
			}
		}
	}

	else if (AllKeyState[KEY_INPUT_RIGHT] != 0)  //�E���L�[��������Ă���Ƃ�
	{
		if (Myplayer.NowHandleCnt < Myplayer.NowHandleCntMAX)
		{
			Myplayer.NowHandleCnt++;
		}
		else
		{
			Myplayer.NowHandleCnt = 0;

			if (Myplayer.NowHandleNum >= 3 && Myplayer.NowHandleNum < 5)
			{
				Myplayer.NowHandleNum++;	//���̉E�����̉摜
			}
			else
			{
				Myplayer.NowHandleNum = 3; //��ԍŏ��̉E�����̉摜
			}
		}
	}

	else if (AllKeyState[KEY_INPUT_UP] != 0)	//����L�[��������Ă���Ƃ�
	{
		if (Myplayer.NowHandleCnt < Myplayer.NowHandleCntMAX)
		{
			Myplayer.NowHandleCnt++;
		}
		else
		{
			Myplayer.NowHandleCnt = 0;

			if (Myplayer.NowHandleNum >= 0 && Myplayer.NowHandleNum < 2)
			{
				Myplayer.NowHandleNum++;	//���̏�����̉摜
			}
			else
			{
				Myplayer.NowHandleNum = 0; //��ԍŏ��̏�����̉摜
			}
		}
	}

	else if (AllKeyState[KEY_INPUT_DOWN] != 0)
	{
		if (Myplayer.NowHandleCnt < Myplayer.NowHandleCntMAX)
		{
			Myplayer.NowHandleCnt++;
		}
		else
		{
			Myplayer.NowHandleCnt = 0;

			if (Myplayer.NowHandleNum >= 6 && Myplayer.NowHandleNum < 8)
			{
				Myplayer.NowHandleNum++;	//���̍������̉摜
			}
			else
			{
				Myplayer.NowHandleNum = 6; //��ԍŏ��̍������̉摜
			}
		}
	}
	return;
}

//########## �G��\������(�ڍ�)�֐� ##########
//���@���@�FBOSS * �F�G�̐擪�A�h���X(�|�C���^)
//���@���@�Fint		�F�G�̐�
//�߂�l�@�F�Ȃ�
VOID MY_PLAY_ENEMY_DRAW_DETAIL(BOSS *boss)
{

	//�{�X��`��	
	//DrawGraph(
	//	boss->bossimage.X[0],
	//	boss->bossimage.Y[0],
	//	(boss->muki == GAME_BOSS_FIRST_MUKI_U ? boss->bossimage.Handle[12] : (boss->muki == GAME_BOSS_FIRST_MUKI_D ? boss->bossimage.Handle[0] : (boss->muki == GAME_BOSS_FIRST_MUKI_L ? boss->bossimage.Handle[4] : boss->bossimage.Handle[8]))), TRUE);

	DrawGraph(boss->bossimage.X[0], boss->bossimage.Y[0], boss->bossimage.Handle[boss->NowHandleNum], TRUE);
	DrawBox(
	oni.atariRect.left,
	oni.atariRect.top,
	oni.atariRect.right,
	oni.atariRect.bottom,
	GetColor(0, 0, 255), FALSE);	//�g���`��

	//�摜���A�j���[�V����������
	switch (boss->muki)
	{
	case GAME_BOSS_FIRST_MUKI_U:

		//if (boss ->NowHandleNum >= GAME_BOSS_FIRST_MUKI_U
		//	&& boss->NowHandleNum < GAME_BOSS_FIRST_MUKI_U + 4)
		//{
		//	boss->NowHandleNum++;	//���̉摜
		//	boss->NowHandleCnt++;	//�J�E���g�A�b�v
		//}
		//else
		//{
		//	boss->NowHandleNum = GAME_BOSS_FIRST_MUKI_U;	//�ŏ��̉摜
		//}

		if (boss->NowHandleCnt >= 0
			&& boss->NowHandleCnt < 3)
		{
			boss->NowHandleNum++;	//���̉摜
			boss->NowHandleCnt++;	//�J�E���g�A�b�v
		}
		else
		{
			boss->NowHandleNum = GAME_BOSS_FIRST_MUKI_U;	//�ŏ��̉摜
			boss->NowHandleCnt = 0;
		}



		break;

	case GAME_BOSS_FIRST_MUKI_R:

		//if (boss->NowHandleNum >= GAME_BOSS_FIRST_MUKI_R
		//	&& boss->NowHandleNum < GAME_BOSS_FIRST_MUKI_R + 4)
		//{
		//	boss->NowHandleNum++;	//���̉摜
		//	boss->NowHandleCnt++;	//�J�E���g�A�b�v
		//}
		//else
		//{
		//	boss->NowHandleNum = GAME_BOSS_FIRST_MUKI_R;	//�ŏ��̉摜
		//}

		if (boss->NowHandleCnt >= 0
			&& boss->NowHandleCnt < 3)
		{
			boss->NowHandleNum++;	//���̉摜
			boss->NowHandleCnt++;	//�J�E���g�A�b�v
		}
		else
		{
			boss->NowHandleNum = GAME_BOSS_FIRST_MUKI_R;	//�ŏ��̉摜
			boss->NowHandleCnt = 0;
		}


		break;

	case GAME_BOSS_FIRST_MUKI_D:

		//if (boss->NowHandleNum >= GAME_BOSS_FIRST_MUKI_D
		//	&& boss->NowHandleNum < GAME_BOSS_FIRST_MUKI_D + 4)
		//{
		//	boss->NowHandleNum++;	//���̉摜
		//	boss->NowHandleCnt++;	//�J�E���g�A�b�v
		//}
		//else
		//{
		//	boss->NowHandleNum = GAME_BOSS_FIRST_MUKI_D;
		//}

		if (boss->NowHandleCnt >= 0
			&& boss->NowHandleCnt < 3)
		{
			boss->NowHandleNum++;	//���̉摜
			boss->NowHandleCnt++;	//�J�E���g�A�b�v
		}
		else
		{
			boss->NowHandleNum = GAME_BOSS_FIRST_MUKI_D;	//�ŏ��̉摜
			boss->NowHandleCnt = 0;
		}



		break;

	case GAME_BOSS_FIRST_MUKI_L:

		//if (boss->NowHandleNum >= GAME_BOSS_FIRST_MUKI_L
		//	&& boss->NowHandleNum < GAME_BOSS_FIRST_MUKI_L + 4)
		//{
		//	boss->NowHandleNum++;	//���̉摜
		//	boss->NowHandleCnt++;	//�J�E���g�A�b�v
		//}
		//else
		//{
		//	boss->NowHandleNum = GAME_BOSS_FIRST_MUKI_L;
		//}

		if (boss->NowHandleCnt >= 0
			&& boss->NowHandleCnt < 3)
		{
			boss->NowHandleNum++;	//���̉摜
			boss->NowHandleCnt++;	//�J�E���g�A�b�v
		}
		else
		{
			boss->NowHandleNum = GAME_BOSS_FIRST_MUKI_L;	//�ŏ��̉摜
			boss->NowHandleCnt = 0;
		}


		break;

	default:
		break;
	}

	return;
}

//########## �G��\������֐� ##########
VOID MY_PLAY_ENEMY_DRAW(BOSS *boss)
{
	MY_PLAY_ENEMY_DRAW_DETAIL(boss);

	return;
}

//########## �G�𑀍삷��(�ڍ�)�֐� ##########
//���@���@�FBOSS * �F�G�̐擪�A�h���X(�|�C���^)
//���@���@�Fint		�F�G�̐�
//�߂�l�@�F�Ȃ�
VOID MY_PLAY_ENEMY_OPERATION_DETAIL(BOSS *boss, CHARADATA *c)
{


	//if ( boss ->IsAlive == FALSE)
	//{
	//	continue;	//�G�������ĂȂ���΁A���̓G�̏���������
	//}


	if (boss->IsView == FALSE)
	{
		boss->X = boss->SetFirstX;		//X�ʒu��ݒ肵����
		boss->Y = boss->SetFirstY;		//Y�ʒu��ݒ肵����
		//boss->muki = boss->SetFirstmuki;	//������ݒ肵����


		boss->IsView = TRUE;				//�G��\������
	}

	//boss->C_Height = 32;
	//boss->C_Width = 32;


	enum BOSS_MOVE_DIST
	{
		BOSS_MOVE_UP = 12,	//��
		BOSS_MOVE_DOWN = 0,	//��
		BOSS_MOVE_LEFT = 4,	//��
		BOSS_MOVE_RIGHT = 8,//�E
		BOSS_MOVE_NONE = -1	//�����Ȃ�
	};

	static int boss_move_dist = (int)BOSS_MOVE_NONE;	//�G�̈ړ�����

	//MY_PLAY_ENEMY_CHARA_COLLISION(boss, c); //�G�ƃv���C���[�Ƃ̐ڐG�֐�

	static int x = 0, y = 0;

	if (MY_CHECK_RECT_ATARI_PLAYER_BOSS_ATARIBASHO(boss->atariRect, c->atariRect, &x, &y) == FALSE)	//�v���C���[�ƃ{�X���������Ă��Ȃ��Ƃ�
	{

		int sa_y = (Myplayer.Y + Myplayer.C_Height) - (boss->bossimage.Y[0] + boss->bossimage.C_Height[0]);
		int sa_x = (Myplayer.X + Myplayer.C_Width) - (boss->bossimage.X[0] + boss->bossimage.C_Width[0]);

		unsigned int sa_y_ab = 0;
		unsigned int sa_x_ab = 0;

		sa_x_ab = sa_x;
		sa_y_ab = sa_y;

		if (sa_y_ab <= sa_x_ab)					//���̈ړ������L����
		{
			if (sa_x > 0)						//���R���̂Ƃ�
			{
				boss_move_dist = (int)BOSS_MOVE_RIGHT;	//�G�̈ړ������A�E
			}
			else								//��������Ȃ��Ƃ�
			{
				boss_move_dist = (int)BOSS_MOVE_LEFT;	//�G�̈ړ������A��
			}
		}
		else if (sa_y_ab > sa_x_ab)								//�c�̈ړ������L����
		{
			if (sa_y > 0)						//���R���̂Ƃ�
			{
				boss_move_dist = (int)BOSS_MOVE_DOWN;		//�G�̈ړ������A��
			}
			else								//��������Ȃ��Ƃ�
			{
				boss_move_dist = (int)BOSS_MOVE_UP;		//�G�̈ړ������A��
			}
		}
	}
	else
	{
		int GameSceneNow = (int)GAME_SCENE_GAMEOVER;
	}




	switch (boss_move_dist)		//�G�̈ړ��������Ƃɏ����𕪂���
	{

	case (int)BOSS_MOVE_UP:		//��̂Ƃ���������


		boss->bossimage.Y[0] -= boss->Speed;
		boss->muki = boss_move_dist;
		//boss->NowHandleNum = boss_move_dist + boss->NowHandleCnt;

		break;					//��̂Ƃ������܂�

	case (int)BOSS_MOVE_DOWN:		//���̂Ƃ���������

		boss->bossimage.Y[0] += boss->Speed;
		boss->muki = boss_move_dist;
		//boss->NowHandleNum = boss_move_dist + boss->NowHandleCnt;

		break;					//���̂Ƃ������܂�

	case (int)BOSS_MOVE_LEFT:		//���̂Ƃ���������

		boss->muki = boss_move_dist;
		//boss->NowHandleNum = boss_move_dist + boss->NowHandleCnt;

		if (boss->CanMoveLeft == TRUE)	//���ɓ�����Ƃ��́E�E�E
		{
			boss->bossimage.X[0] -= boss->Speed;
		}

		break;					//���̂Ƃ������܂�

	case (int)BOSS_MOVE_RIGHT:		//�E�̂Ƃ���������

		boss->muki = boss_move_dist;
		//boss->NowHandleNum = boss_move_dist + boss->NowHandleCnt;

		if (boss->CanMoveRight == TRUE)	//�E�ɓ�����Ƃ��́E�E�E
		{
			boss->bossimage.X[0] += boss->Speed;
		}

		break;					//�E�̂Ƃ������܂�

	case (int)BOSS_MOVE_NONE:	//�ړ��Ȃ��̂Ƃ�

		boss->muki = GAME_BOSS_FIRST_MUKI_D;	//������

		break;					//�ړ��Ȃ��̂Ƃ�


	default:
		break;
	}


	MY_PLAY_ENEMY_MAP_COLLISION(boss);	//�G�ƃ}�b�v�Ƃ̐ڐG�֐�


	//if (((Myplayer.Y + Myplayer.C_Height) - (boss->bossimage.Y[0] + boss->C_Height) < 0 ? ((Myplayer.Y + Myplayer.C_Height) - (boss->bossimage.Y[0] + boss->C_Height))*-1 : (Myplayer.Y + Myplayer.C_Height) - (boss->bossimage.Y[0] + boss->C_Height)) > ((Myplayer.X + Myplayer.C_Width) - (boss->bossimage.X[0] + boss->C_Width) < 0 ? ((Myplayer.X + Myplayer.C_Width) - (boss->bossimage.X[0] + boss->C_Width))*-1 : (Myplayer.X + Myplayer.C_Width) - (boss->bossimage.X[0] + boss->C_Width)))
	//{
	//	if ((Myplayer.Y + Myplayer.C_Height) - (boss->bossimage.Y[0] + boss->C_Height) < 0)//��
	//	{
	//		boss->muki = GAME_BOSS_FIRST_MUKI_U;
	//		//boss->bossimage.Handle[0] = 12;
	//	}
	//	else//��
	//	{
	//		boss->muki = GAME_BOSS_FIRST_MUKI_D;
	//		//boss->bossimage.Handle[0] = 0;
	//	}
	//}
	//else
	//{
	//	if ((Myplayer.X + Myplayer.C_Width) - (boss->bossimage.X[0] + boss->C_Width) < 0)//��
	//	{
	//		boss->muki = GAME_BOSS_FIRST_MUKI_L;
	//		//boss->bossimage.Handle[0] = 4;
	//	}
	//	else//�E
	//	{
	//		boss->muki = GAME_BOSS_FIRST_MUKI_R;
	//		//boss->bossimage.Handle[0] = 8;
	//	}
	//}

//if (boss->IsView == TRUE)	//�G���\���ł���Ƃ��́E�E�E
//{
	//switch (boss->muki)
	//{
	//case GAME_BOSS_FIRST_MUKI_U:

	//	if (boss->bossimage.Y[0] > Myplayer.Y)
	//	{
	//		boss->bossimage.Y[0] -= boss->Speed;//oni.bossimage.Y[0]
	//	}
	//	break;

	//case GAME_BOSS_FIRST_MUKI_R:

	//	if (boss->CanMoveRight == TRUE)	//�E�ɓ�����Ƃ��́E�E�E
	//	{
	//		if (boss->bossimage.X[0] < Myplayer.X)
	//		{
	//			boss->bossimage.X[0] += boss->Speed;
	//		}
	//	}
	//	
	//	break;

	//case GAME_BOSS_FIRST_MUKI_D:

	//	if (boss->bossimage.Y[0] < Myplayer.Y)
	//	{
	//		boss->bossimage.Y[0] += boss->Speed;
	//	}
	//	break;

	//case GAME_BOSS_FIRST_MUKI_L:

	//	if (boss->CanMoveLeft == TRUE)	//���ɓ�����Ƃ��́E�E�E
	//	{
	//		if (boss->bossimage.X[0] > Myplayer.X)
	//		{
	//			boss->bossimage.X[0] -= boss->Speed;
	//		}
	//	}
	//	
	//	break;

	//default:
	//	break;
	//}

//	switch (boss->muki)
//	{
//	case GAME_BOSS_FIRST_MUKI_U:

//		//if (Myplayer.ScrollOK_Y)
//		//{
//			boss->bossimage.Y[0] -= boss->Speed;//oni.bossimage.Y[0]
//		//}
//		break;

//	case GAME_BOSS_FIRST_MUKI_R:

//		if (boss->CanMoveRight == TRUE)	//�E�ɓ�����Ƃ��́E�E�E
//		{
//				boss->bossimage.X[0] += boss->Speed;
//		}

//		break;

//	case GAME_BOSS_FIRST_MUKI_D:

//			boss->bossimage.Y[0] += boss->Speed;
//		break;

//	case GAME_BOSS_FIRST_MUKI_L:

//		if (boss->CanMoveLeft == TRUE)	//���ɓ�����Ƃ��́E�E�E
//		{
//				boss->bossimage.X[0] -= boss->Speed;
//		}

//		break;

//	default:
//		break;
//	}

//	MY_PLAY_ENEMY_MAP_COLLISION(boss);	//�G�ƃ}�b�v�Ƃ̐ڐG�֐�

//}

	return;
}

//########## �G�𑀍삷��֐� ##########
VOID MY_PLAY_ENEMY_OPERATION(VOID)
{
	MY_PLAY_ENEMY_OPERATION_DETAIL(&oni, &Myplayer);	//boss�̐擪�A�h���X������

	return;
}

//########## �G�ƃ}�b�v�Ƃ̐ڐG�֐� ##########
VOID MY_PLAY_ENEMY_MAP_COLLISION(BOSS *e)
{

	//�������ɁA�܂�������
	(e)->CanMoveLeft = TRUE;

	MY_SET_ENEMY_ATARI(e);			//�G�̓����蔻��̗̈��ݒ�
	e->atariRect.left -= 4;			//�����A�G�̓����蔻��̗̈�����ɂ��炷
	e->atariRect.right -= 4;		//�����A�G�̓����蔻��̗̈�����ɂ��炷

	static int x = 0, y = 0;

	if (MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(e->atariRect, MapImage_A[MapNowPos].rect_NG, &x, &y) == TRUE)	//���ɍs���Ȃ����m�Ɠ��������Ƃ�
	{
		e->CanMoveLeft = FALSE;	//���ɍs���Ȃ�
	}

	//�E�����ɁA�܂�������
	(e)->CanMoveRight = TRUE;

	MY_SET_ENEMY_ATARI(e);			//�G�̓����蔻��̗̈��ݒ�
	e->atariRect.left += 4;			//�����A�G�̓����蔻��̗̈���E�ɂ��炷
	e->atariRect.right += 4;		//�����A�G�̓����蔻��̗̈���E�ɂ��炷

	if (MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(e->atariRect, MapImage_A[MapNowPos].rect_NG, &x, &y) == TRUE)	//�E�ɍs���Ȃ����m�Ɠ��������Ƃ�
	{
		e->CanMoveRight = FALSE;	//�E�ɍs���Ȃ�
	}

	//������ɂ܂�������
	(e)->CanMoveUp = TRUE;

	MY_SET_ENEMY_ATARI(e);
	e->atariRect.top -= 4;
	e->atariRect.bottom -= 4;

	if (MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(e->atariRect, MapImage_A[MapNowPos].rect_NG, &x, &y) == TRUE)	//�E�ɍs���Ȃ����m�Ɠ��������Ƃ�
	{
		e->CanMoveUp = FALSE;	//��ɍs���Ȃ�
	}

	//�������ɂ܂�������
	(e)->CanMoveDown = TRUE;

	MY_SET_ENEMY_ATARI(e);
	e->atariRect.top += 4;
	e->atariRect.bottom += 4;

	if (MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(e->atariRect, MapImage_A[MapNowPos].rect_NG, &x, &y) == TRUE)	//�E�ɍs���Ȃ����m�Ɠ��������Ƃ�
	{
		e->CanMoveDown = FALSE;	//��ɍs���Ȃ�
	}

	return;
}

//########## �G�ƃL�����Ƃ̐ڐG�֐� ##########
VOID MY_PLAY_ENEMY_CHARA_COLLISION(BOSS *e, CHARADATA *c)
{


	MY_SET_ENEMY_ATARI(e);			//�G�̓����蔻��̗̈��ݒ�
	e->atariRect.left -= 4;			//�����A�G�̓����蔻��̗̈�����ɂ��炷
	e->atariRect.right -= 4;		//�����A�G�̓����蔻��̗̈�����ɂ��炷

	MY_SET_PLAYER_ATARI(c);			//�v���C���[�̓����蔻��̗̈��ݒ�
	c->atariRect.left -= 4;			//�����A�G�̓����蔻��̗̈�����ɂ��炷
	c->atariRect.right -= 4;		//�����A�G�̓����蔻��̗̈�����ɂ��炷


	static int x = 0, y = 0;

	//if (MY_CHECK_RECT_ATARI_PLAYER_BOSS_ATARIBASHO(e->atariRect, c->atariRect, &x, &y) == TRUE)	//�v���C���[�ƃ{�X������������
 //	{
	//	GameSceneNow = (int)GAME_SCENE_GAMEOVER;
	//}

	return;
}

//######### �A�C�e�����擾����֐� ###############
VOID MY_PLAY_PLAYER_GETITEM(VOID)
{
	MY_SET_PLAYER_ATARI(&Myplayer);

	int atariX;
	int atariY;


	if (MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(Myplayer.atariRect, ItemImage_1[GAME_MAP_SCENE_F1].rectMap_Item, &atariX, &atariY) == TRUE)
	{
		Myplayer.item[ItemImage_1[GAME_MAP_SCENE_F1].data[atariY][atariX]] ++;

		ItemImage_1[GAME_MAP_SCENE_F1].data[atariY][atariX] = (int)M_B;

		ItemImage_1[GAME_MAP_SCENE_F1].rectMap_Item[atariY][atariX].left = 0;
		ItemImage_1[GAME_MAP_SCENE_F1].rectMap_Item[atariY][atariX].top = 0;
		ItemImage_1[GAME_MAP_SCENE_F1].rectMap_Item[atariY][atariX].right = 0;
		ItemImage_1[GAME_MAP_SCENE_F1].rectMap_Item[atariY][atariX].bottom = 0;
	}
	return;
}

//############# �}�b�v����؂�ւ���֐� ###############
VOID MY_MAP_SCENE_MOVE(VOID)
{
	MY_SET_PLAYER_ATARI(&Myplayer);

	int atariX;
	int atariY;

	if (MY_CHECK_RECT_ATARI_CHARA_MAP_ATARIBASHO(Myplayer.atariRect, MapImage_A[MapNowPos].rectMap_Kaidan, &atariX, &atariY))
	{
		MapNowPos++;

		switch (MapNowPos)
		{
		case GAME_MAP_SCENE_F1:


			break;
		case GAME_MAP_SCENE_F2:

			break;

		case GAME_MAP_SCENE_F3:

			break;

		case GAME_MAP_SCENE_F4:

			break;
		case GAME_MAP_SCENE_BOSS:

			Myplayer.X = 400;
			Myplayer.Y = 500;
			ScrollCntTate = 400;
			ScrollCntYoko = 400;

			StopSoundMem(MUSIC_MY_BGM_1.Handle);

			//BGM������Ă��Ȃ��Ƃ�
			if (CheckSoundMem(MUSIC_MY_BOSS.Handle) == 0)
			{
				ChangeVolumeSoundMem(255 * 50 / 100, MUSIC_MY_BOSS.Handle);	//BGM�̉��ʂ�50���ɂ���
				PlaySoundMem(MUSIC_MY_BOSS.Handle, DX_PLAYTYPE_LOOP);			//BGM�𗬂�
			}


			break;
		default:
			break;
		}

	}

	return;
}

//########## ����ǂݍ��ސݒ������֐� ##########
//���@���F���\���́@	:�ݒ肷�鉹�\���̂̕ϐ�
//���@���Fconst char *	:�ǂݍ��މ摜�̃t�@�C���p�X
//�߂�l�FBOOL			:TRUE:���� / FALSE:�ُ�
BOOL MY_MUSIC_LOAD(MUSIC *m, const char *path)
{
	//����ǂݍ���
	m->Handle = LoadSoundMem(path);

	if (m->Handle == -1) { return FALSE; }

	return TRUE;
}

//######### �E�B���h�E�v���V�[�W���֐� ############
LRESULT CALLBACK MY_WNDPROC(HWND hwnd, UINT mgs, WPARAM wp, LPARAM lp)
{
	switch (mgs)
	{

	case WM_CREATE:	//�E�B���h�E�̐�����������

		IsWM_CREATE = TRUE;	//WM_CREATE����I��

		return 0;

	case WM_CLOSE:	//����{�^�����������Ƃ�

		MessageBox(hwnd, TEXT("�Q�[�����I�����܂��B"), TEXT("�I�����b�Z�[�W"), MB_OK);
		break;

	case WM_RBUTTONDOWN:	//�}�E�X�̉E�{�^�����������Ƃ�

		SendMessage(hwnd, WM_CLOSE, 0, 0);	//WM_CLOSE���b�Z�[�W�L���[�ɒǉ�
		break;

	case WM_LBUTTONDOWN:

		PostMessage(hwnd, WM_NCLBUTTONDOWN, (WPARAM)HTCAPTION, lp);		//WM_NCLBUTTONDOWN(�^�C�g���o�[�Ń}�E�X�̍��{�^����������)
		break;

	case WM_ACTIVATE:

		if (IsActiveCheck == TRUE)	//��ʂ̃A�N�e�B�u�`�F�b�N�̗L����
		{
			switch (wp)
			{
			case WA_INACTIVE:	//��A�N�e�B�u��

				StopActiveStartTime = GetNowCount();

				break;

			case WA_ACTIVE:	//�L�[�{�[�h�ȂǂŃA�N�e�B�u��

				StopActiveStartTime = GetNowCount();

				break;

			case WA_CLICKACTIVE:

				StopActiveStopTime = GetNowCount();

				break;

			default:

				break;
			}
		}
		return 0;

	case WM_DESTROY:	//�E�B���h�E���j�����ꂽ�Ƃ�

		PostQuitMessage(0);	//���b�Z�[�W�L���[�� WM_QUIT �𑗂�
		return 0;
	}

	//�f�t�H���g�̃E�B���h�E�v���V�[�W���֐����Ăяo��
	return DefWindowProc(hwnd, mgs, wp, lp);
}