/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$UpdateOfferDuration
bool Rotatelab_Shop_SeasonalOfferButton__UpdateOfferDuration (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$UpdateOfferDuration
   bool Rotatelab_Shop_SeasonalOfferButton__UpdateOfferDuration
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method); */

bool Rotatelab_Shop_SeasonalOfferButton__UpdateOfferDuration_10d11fc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  double dVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_010e1448 + 0x10e1218);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e144c + 0x10e122c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1450 + 0x10e1238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1454 + 0x10e1244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1458 + 0x10e1250));
    *pcVar5 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  Rotatelab_Shop_SeasonalOfferButton__get_OfferEndTime_10d06d4(&uStack_40);
  uVar3 = uStack_34;
  uVar2 = uStack_38;
  uVar1 = uStack_3c;
  uVar4 = uStack_40;
  if (*(int *)(**(int **)(_UNK_010e145c + 0x10e1278) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_40,0);
  System_DateTimeOffset__op_Subtraction_2b51124
            (&uStack_30,uStack_3c,uVar4,uVar1,uVar2,uVar3,uStack_40,uStack_3c,uStack_38,uStack_34,0)
  ;
  if (*(int *)(**(int **)(_UNK_010e1460 + 0x10e12d8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar9 = (double)System_TimeSpan__get_TotalSeconds_2b89cf0(&uStack_30,0);
  uVar1 = uStack_2c;
  uVar4 = uStack_30;
  if (dVar9 <= 0.0) {
    piVar7 = *(int **)(_UNK_010e1464 + 0x10e13bc);
    iVar6 = *piVar7;
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      iVar6 = *piVar7;
    }
    iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 0xe8);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar6,0);
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x14),0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar6,0,0);
  }
  else {
    if (*(int *)(**(int **)(_UNK_010e1468 + 0x10e1310) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar8 = 0;
    uVar4 = Rotatelab_Extensions__GetTimeText_fc3638(uVar4,uVar1,0);
    while( true ) {
      if (*(int *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x68) + 0xc) <= (int)uVar8) break;
      iVar6 = *(int *)(param_1 + 0x68);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar6 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar7 = *(int **)(iVar6 + uVar8 * 4 + 0x10);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar7 + 0x2b0))(piVar7,uVar4,*(undefined4 *)(*piVar7 + 0x2b4));
      uVar8 = uVar8 + 1;
    }
  }
  return 0.0 < dVar9;
}

