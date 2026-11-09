/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$OnMainCanvasChangeEndedHandler
void Rotatelab_Shop_SeasonalOfferButton__OnMainCanvasChangeEndedHandler (Rotatelab_Shop_SeasonalOfferButton_o* __this, int32_t mainCanvasType, bool arg2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$OnMainCanvasChangeEndedHandler
   void Rotatelab_Shop_SeasonalOfferButton__OnMainCanvasChangeEndedHandler
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, int32_t mainCanvasType, bool arg2, const
   MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton__OnMainCanvasChangeEndedHandler_10d146c
               (int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010e158c + 0x10e1484);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1590 + 0x10e1498));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1594 + 0x10e14a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1598 + 0x10e14b0));
    *pcVar6 = '\x01';
  }
  if ((param_2 != 0) ||
     (iVar1 = (**(code **)(*param_1 + 0x160))(param_1,*(undefined4 *)(*param_1 + 0x164)), iVar1 == 0
     )) {
    return;
  }
  iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_ForcedSeasonalOfferVersion_10d09e0();
  iVar2 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec();
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x24) <= iVar1) {
    return;
  }
  iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Shop_SeasonalOfferButton__set_ForcedSeasonalOfferVersion_10d0a34
            (*(undefined4 *)(iVar1 + 0x24));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e159c + 0x10e152c));
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e15a0 + 0x10e1540));
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_010e15a4 + 0x10e155c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_0108a578 + 0x108a524);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),0x10,uVar3,0,unaff_r4,unaff_r5,unaff_r6)
    ;
    *pcVar6 = '\x01';
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
            (*(int *)(iVar1 + 0x10),0x10,uVar3,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    return;
  }
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  iVar2 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar1);
  if (iVar2 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
    uVar5 = thunk_FUN_00f00cdc();
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar5,uVar3,0);
  }
  else {
    iVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar4 != 0) {
      pcVar6 = (char *)(iRam036143f4 + 0x3614380);
      if (*pcVar6 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
        *pcVar6 = '\x01';
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
          *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar1,iVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
    uVar5 = thunk_FUN_00f00cdc();
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar5,uVar3,0);
  }
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar5,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

