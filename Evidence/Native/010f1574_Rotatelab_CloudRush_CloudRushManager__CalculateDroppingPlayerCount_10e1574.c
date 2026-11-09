/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$CalculateDroppingPlayerCount
void Rotatelab_CloudRush_CloudRushManager__CalculateDroppingPlayerCount (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$CalculateDroppingPlayerCount
   void Rotatelab_CloudRush_CloudRushManager__CalculateDroppingPlayerCount
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__CalculateDroppingPlayerCount_10e1574(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010f163c + 0x10f1588);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1640 + 0x10f159c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1644 + 0x10f15a8));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x74) + 0xc);
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar5 < *(int *)(param_1 + 0xac)) {
    iVar1 = iVar5;
  }
  uVar4 = iVar1 - (uint)*(byte *)(param_1 + 0xb4);
  *(uint *)(param_1 + 0xb0) = uVar4 & ~((int)uVar4 >> 0x1f);
  if (*(int *)(param_1 + 0x9c) == 6 || *(int *)(param_1 + 0x9c) == 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010f1648 + 0x10f15fc));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentVisiblePlayerCount_10dbedc
                      ();
    iVar5 = *(int *)(param_1 + 0xb0);
    pcVar6 = (char *)(_UNK_010ebf7c + 0x10ebf44);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010ebf80 + 0x10ebf58));
      *pcVar6 = '\x01';
    }
    iVar1 = UnityEngine_PlayerPrefs__TrySetInt_35f6358
                      (**(undefined4 **)(_UNK_010ebf84 + 0x10ebf74),iVar1 - iVar5,0);
    if (iVar1 != 0) {
      return;
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b64 + 0x3606b28));
    uVar2 = thunk_FUN_00f00cdc();
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b68 + 0x3606b3c));
    UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar2,uVar3);
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b6c + 0x3606b54));
    FUN_01f4fe28(uVar2,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
  return;
}

