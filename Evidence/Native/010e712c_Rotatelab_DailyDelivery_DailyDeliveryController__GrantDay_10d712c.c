/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$GrantDay
void Rotatelab_DailyDelivery_DailyDeliveryController__GrantDay (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, Rotatelab_DailyDelivery_DailyDeliverySO_DayData_o* day, float rewardStagger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010e7510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$GrantDay
   void Rotatelab_DailyDelivery_DailyDeliveryController__GrantDay
   (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this,
   Rotatelab_DailyDelivery_DailyDeliverySO_DayData_o* day, float rewardStagger, const MethodInfo*
   method); */

void Rotatelab_DailyDelivery_DailyDeliveryController__GrantDay_10d712c
               (undefined4 param_1,int param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int **ppiStack_5c;
  int iStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int *piStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  pcVar7 = (char *)(_UNK_010e75f4 + 0x10e7150);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e75f8 + 0x10e7164));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e75fc + 0x10e7170));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e7600 + 0x10e717c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e7604 + 0x10e7188));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e7608 + 0x10e7194));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e760c + 0x10e71a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e7610 + 0x10e71ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e7614 + 0x10e71b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e7618 + 0x10e71c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e761c + 0x10e71d0));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_40 = 0;
  piStack_44 = (int *)0x0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&iStack_58,*(int *)(param_2 + 8),**(undefined4 **)(_UNK_010e7620 + 0x10e7220));
  iStack_40 = iStack_58;
  uStack_3c = puStack_54;
  uStack_38 = uStack_50;
  iStack_34 = iStack_4c;
  iVar12 = 0;
  iStack_58 = 0;
  piVar11 = *(int **)(_UNK_010e7624 + 0x10e7254);
  puStack_54 = &iStack_40;
LAB_010e7250:
  iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                    (&iStack_40,**(undefined4 **)(_UNK_010e763c + 0x10e725c));
  iVar3 = iStack_58;
  if (iVar1 == 0) {
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (puStack_54,**(undefined4 **)(_UNK_010e7640 + 0x10e7570));
    if (iVar3 != 0) {
      FUN_00ec3a6c(iVar3);
    }
    return;
  }
  if (iStack_34 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__get_GrantedRewards_10d8064
                            (iStack_34);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_010e7628 + 0x10e72a4)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
        goto LAB_010e72ec;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar2,**(int **)(_UNK_010e7628 + 0x10e72a4),0);
LAB_010e72ec:
  piStack_44 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
  ppiStack_5c = &piStack_44;
  uStack_60 = 0;
  do {
    piVar2 = piStack_44;
    if (piStack_44 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *piStack_44;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_010e736c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piStack_44,*piVar11,0);
LAB_010e736c:
    iVar3 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    piVar2 = piStack_44;
    if (iVar3 == 0) break;
    if (piStack_44 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *piStack_44;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_010e762c + 0x10e73a4)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_010e73ec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piStack_44,**(int **)(_UNK_010e762c + 0x10e73a4),0);
LAB_010e73ec:
    iVar3 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010e7630 + 0x10e740c));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    uVar8 = *(undefined4 *)(iVar3 + 0x18);
    uVar9 = *(undefined4 *)(iVar3 + 0x1c);
    fVar13 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x16) & 3);
    uStack_64 = 0;
    uStack_68 = 0;
    System_Nullable_float____ctor_17dea40
              (&uStack_68,fVar13 * param_3,**(undefined4 **)(_UNK_010e7634 + 0x10e743c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
              (iVar1,uVar10,uVar8,uVar9,uStack_68,uStack_64,0);
    iVar12 = iVar12 + 1;
  } while( true );
  if (piStack_44 != (int *)0x0) {
    iVar3 = *piStack_44;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_010e7638 + 0x10e74b0)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_010e74f8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piStack_44,**(int **)(_UNK_010e7638 + 0x10e74b0),0);
LAB_010e74f8:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  goto LAB_010e7250;
}

