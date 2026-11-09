/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChest$$Awake
void Rotatelab_DailyDelivery_DailyDeliveryChest__Awake (Rotatelab_DailyDelivery_DailyDeliveryChest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryChest$$Awake
   void Rotatelab_DailyDelivery_DailyDeliveryChest__Awake
   (Rotatelab_DailyDelivery_DailyDeliveryChest_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryChest__Awake_10d4bb4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  pcVar4 = (char *)(_UNK_010e4c54 + 0x10e4bc8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4c58 + 0x10e4bdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4c5c + 0x10e4be8));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e4c60 + 0x10e4c0c));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_010e4c64 + 0x10e4c2c),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc(uVar1,uVar1,0);
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_0362a14c + 0x362a0a8);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
    *pcVar4 = '\x01';
  }
  iVar7 = *(int *)(iVar5 + 0xc);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar7 + 8);
  uVar6 = *(uint *)(iVar7 + 0xc);
  piVar3 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar7 + 0xc) = uVar6 + 1;
    puVar2 = (undefined4 *)(iVar8 + uVar6 * 4 + 0x10);
    *puVar2 = uVar1;
    thunk_FUN_00ec5080(puVar2,uVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar7,uVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(iVar5 + 0x14) = 1;
  return;
}

