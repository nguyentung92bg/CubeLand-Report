/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$Start
void Rotatelab_DailyDelivery_DailyDeliveryController__Start (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$Start
   void Rotatelab_DailyDelivery_DailyDeliveryController__Start
   (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryController__Start_10d61b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar6;
  int *piVar7;
  undefined8 uStack_20;
  uint uStack_18;
  
  pcVar6 = (char *)(_UNK_010e601c + 0x10e5ed8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6020 + 0x10e5eec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6024 + 0x10e5ef8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6028 + 0x10e5f04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e602c + 0x10e5f10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6030 + 0x10e5f1c));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010e6034 + 0x10e5f30) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  piVar7 = *(int **)(_UNK_010e6038 + 0x10e5f60);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x34) <= iVar2) {
    Rotatelab_DailyDelivery_DailyDeliveryProgress__Evaluate_10d61b4
              (&uStack_20,*(undefined4 *)(param_1 + 0x18));
    *(uint *)(param_1 + 0x34) = uStack_18;
    *(undefined8 *)(param_1 + 0x2c) = uStack_20;
    if ((uStack_18 & 0xff) != 0) {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010e603c + 0x10e5fb4));
      uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e6040 + 0x10e5fc8));
      System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_010e6044 + 0x10e5fe4),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar6 = (char *)(_UNK_0108a578 + 0x108a524);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),0,uVar1,0);
        *pcVar6 = '\x01';
      }
      if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
                (*(int *)(iVar2 + 0x10),0,uVar1,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
      if (*(char *)(iVar2 + 0x1c) != '\0') {
        return;
      }
      *(undefined1 *)(iVar2 + 0x1c) = 1;
      iVar3 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar2);
      if (iVar3 == 0) {
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
        uVar5 = thunk_FUN_00f00cdc();
        uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
        System_NullReferenceException___ctor_2b721e8(uVar5,uVar1,0);
      }
      else {
        iVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
        if (iVar4 != 0) {
          pcVar6 = (char *)(iRam036143f4 + 0x3614380);
          if (*pcVar6 == '\0') {
            thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
            *pcVar6 = '\x01';
          }
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
              UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
              *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
            }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(iVar2,iVar3);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
        }
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
        uVar5 = thunk_FUN_00f00cdc();
        uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
        System_ArgumentException___ctor_2b113a4(uVar5,uVar1,0);
      }
      uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
      FUN_01f4fe28(uVar5,uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe2c();
    }
  }
  return;
}

