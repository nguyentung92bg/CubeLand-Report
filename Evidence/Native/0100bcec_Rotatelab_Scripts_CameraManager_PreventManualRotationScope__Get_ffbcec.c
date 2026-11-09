/* IL2CPP: Rotatelab.Scripts.CameraManager.PreventManualRotationScope$$Get
Rotatelab_Scripts_CameraManager_PreventManualRotationScope_o* Rotatelab_Scripts_CameraManager_PreventManualRotationScope__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.CameraManager.PreventManualRotationScope$$Get
   Rotatelab_Scripts_CameraManager_PreventManualRotationScope_o*
   Rotatelab_Scripts_CameraManager_PreventManualRotationScope__Get (const MethodInfo* method); */

undefined4 Rotatelab_Scripts_CameraManager_PreventManualRotationScope__Get_ffbcec(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0100bd98 + 0x100bcfc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bd9c + 0x100bd10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bda0 + 0x100bd1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100bda4 + 0x100bd28));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0100bda8 + 0x100bd3c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Pool_GenericPool_object___Get_24058d0
                    (**(undefined4 **)(_UNK_0100bdac + 0x100bd58));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0100bdb0 + 0x100bd6c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_CameraManager__TrySetManualRotationAllowed_ffbbd4(iVar2,0,uVar1);
  return uVar1;
}

