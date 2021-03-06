#ifndef DIRECTOR_H
#define DIRECTOR_H

extern TEXTURE_DETAILS addcam;
extern TEXTURE_DETAILS frameadv;
extern TEXTURE_DETAILS autocam;
extern TEXTURE_DETAILS chasecar;
extern TEXTURE_DETAILS choosecar;
extern TEXTURE_DETAILS clock;
extern TEXTURE_DETAILS delcam;
extern TEXTURE_DETAILS editcam;
extern TEXTURE_DETAILS fixedcam;
extern TEXTURE_DETAILS incar;
extern TEXTURE_DETAILS lenschan;
extern TEXTURE_DETAILS lookcar;
extern TEXTURE_DETAILS movecam;
extern TEXTURE_DETAILS movecampos;
extern TEXTURE_DETAILS ok;
extern TEXTURE_DETAILS pause;
extern TEXTURE_DETAILS playcam;
extern TEXTURE_DETAILS playpause;
extern TEXTURE_DETAILS save2card;
extern TEXTURE_DETAILS restart;

extern int FastForward;
extern int EditMode;
extern int ClearCameras;

extern void InitDirectorVariables(); // 0x0003E79C

extern void DeleteCurrentCamera(int CameraCnt); // 0x0003E808

extern void setCamera(PLAYBACKCAMERA *Change); // 0x0003E89C

extern void EditCamera(int CameraCnt); // 0x0003B2E4

extern void RecordCamera(int CameraCnt); // 0x0003B548

extern void FindNextChange(int CameraCnt); // 0x0003E94C

extern int CheckCameraChange(int CameraCnt); // 0x0003B794

extern void SetPlaybackCamera(PLAYBACKCAMERA *camera); // 0x0003EC0C

extern int IsMovingCamera(PLAYBACKCAMERA *lastcam, PLAYBACKCAMERA *nextcam, int cameracnt); // 0x0003B8C8

extern void CameraBar(int CameraCnt); // 0x0003BBA8

extern PLAYBACKCAMERA * FindFreeCamera(); // 0x0003E9B8

extern void deleteCamera(int count); // 0x0003E9F8

extern void DeleteAllCameras(); // 0x0003EA40

extern void ShowIcons(unsigned char *menu, int selected, int x_offset); // 0x0003C1B0

extern void ShowReplayOptions(); // 0x0003EAA4

extern void ShowReplayMenu(); // 0x0003C5BC

extern void ControlReplay(); // 0x0003C7A8

extern void DoAutoDirect(); // 0x0003DE60

extern int SelectCameraCar(int current); // 0x0003E328

extern int InvalidCamera(int car_num); // 0x0003E53C

extern int NoMoreCamerasErrorMessage(); // 0x0003EAF0

extern int FirstCamera(); // 0x0003EB6C

extern int dist(VECTOR *pos1, VECTOR *pos2); // 0x0003EB9C

extern void SetCameraReturnedFromCutscene(int CameraCnt); // 0x0003ECC4


#endif
