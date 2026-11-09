/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$get_VisiblePlayerCountInPlayerPool
int32_t Rotatelab_CloudRush_CloudRushManager__get_VisiblePlayerCountInPlayerPool (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$get_VisiblePlayerCountInPlayerPool
   int32_t Rotatelab_CloudRush_CloudRushManager__get_VisiblePlayerCountInPlayerPool
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushManager__get_VisiblePlayerCountInPlayerPool_10dfc94(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  pcVar3 = (char *)(_UNK_010efd28 + 0x10efca8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010efd2c + 0x10efcbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010efd30 + 0x10efcc8));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 0xc);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010efd34 + 0x10efcec));
    if (iVar1 != 0) {
      uVar5 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentVisiblePlayerCount_10dbedc
                        ();
      iVar1 = (int)((ulonglong)uVar5 >> 0x20);
      iVar2 = *(int *)(param_1 + 0x9c);
      if (iVar2 != 6) {
        iVar1 = 0;
      }
      if (iVar2 == 6 || iVar2 == 0) {
        iVar1 = *(int *)(param_1 + 0xb0);
      }
      iVar1 = iVar1 + (int)uVar5;
      if (iVar4 < iVar1) {
        iVar1 = iVar4;
      }
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

