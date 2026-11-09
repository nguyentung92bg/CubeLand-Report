/* IL2CPP: Rotatelab.Debugging.TestUserManager$$OpenLevel
void Rotatelab_Debugging_TestUserManager__OpenLevel (Rotatelab_Debugging_TestUserManager_o* __this, int32_t levelNumber, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.TestUserManager$$OpenLevel
   void Rotatelab_Debugging_TestUserManager__OpenLevel (Rotatelab_Debugging_TestUserManager_o*
   __this, int32_t levelNumber, const MethodInfo* method); */

void Rotatelab_Debugging_TestUserManager__OpenLevel_110ddd0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_0111df28 + 0x111dde8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111df2c + 0x111ddfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111df30 + 0x111de08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111df34 + 0x111de14));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0111df38 + 0x111de28) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar5 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  piVar2 = (int *)uVar5;
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar2 + 0xf8))
            (piVar2,(int)((ulonglong)uVar5 >> 0x20),param_2,param_2 >> 0x1f,
             *(undefined4 *)(*piVar2 + 0xfc));
  Rotatelab_Scripts_LevelManager__set_IsInRoundMode_1067e3c(0,0);
  piVar2 = *(int **)(_UNK_0111df3c + 0x111de84);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
  puVar4 = *(undefined4 **)(_UNK_0111df40 + 0x111dec4);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_1143a20(&uStack_20,iVar1,0,0);
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget_321de88(uStack_20,uStack_1c,0);
  return;
}

