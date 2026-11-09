/* IL2CPP: Rotatelab.Shop.ShopRestoreButton$$Awake
void Rotatelab_Shop_ShopRestoreButton__Awake (Rotatelab_Shop_ShopRestoreButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopRestoreButton$$Awake
   void Rotatelab_Shop_ShopRestoreButton__Awake (Rotatelab_Shop_ShopRestoreButton_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_ShopRestoreButton__Awake_10c346c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  
  pcVar3 = (char *)(_UNK_010d36d4 + 0x10d3480);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d36d8 + 0x10d3494));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d36dc + 0x10d34a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d36e0 + 0x10d34ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d36e4 + 0x10d34b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d36e8 + 0x10d34c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d36ec + 0x10d34d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d36f0 + 0x10d34dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d36f4 + 0x10d34e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d36f8 + 0x10d34f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d36fc + 0x10d3500));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d3700 + 0x10d3514));
  uVar2 = UnityEngine_Component__GetComponent_object__143f3b0
                    (param_1,**(undefined4 **)(_UNK_010d3704 + 0x10d3528));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_IAP_PurchasesListener__SetRestoreButton_109a808(iVar1,uVar2,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d3708 + 0x10d355c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Shop_ShopRestoreButton__OnMainCanvasChangeEndedHandler_10c3728
            (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10),0);
  piVar5 = *(int **)(_UNK_010d370c + 0x10d359c);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xe4);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d3710 + 0x10d35c0));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010d3714 + 0x10d35e0),0);
  uVar2 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xe4) = uVar2;
  thunk_FUN_00ec5080();
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x120);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d3718 + 0x10d3620));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar2,param_1,**(undefined4 **)(_UNK_010d371c + 0x10d3640),0);
  uVar2 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar4,uVar2,**(undefined4 **)(_UNK_010d3720 + 0x10d3658));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x120) = uVar2;
  thunk_FUN_00ec5080();
  if (*(int *)(**(int **)(_UNK_010d3724 + 0x10d3680) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
  if (iVar1 == 8) {
    return;
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar3 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

