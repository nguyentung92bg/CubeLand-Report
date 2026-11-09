/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryProgress$$Commit
void Rotatelab_DailyDelivery_DailyDeliveryProgress__Commit (Rotatelab_DailyDelivery_DailyDeliveryState_o state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryProgress$$Commit
   void Rotatelab_DailyDelivery_DailyDeliveryProgress__Commit
   (Rotatelab_DailyDelivery_DailyDeliveryState_o state, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryProgress__Commit_10d701c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_010e7118 + 0x10e7038);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e711c + 0x10e704c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e7120 + 0x10e7058));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x80) = param_1;
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 0x84) = param_2 + 1;
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (*(int *)(**(int **)(_UNK_010e7124 + 0x10e70b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_20,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar2 = *(undefined4 **)(_UNK_010e7128 + 0x10e70ec);
  *(undefined4 *)(iVar1 + 0x88) = uStack_20;
  *(undefined4 *)(iVar1 + 0x8c) = uStack_1c;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar1,0);
  return;
}

