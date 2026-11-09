/* IL2CPP: Rotatelab.Shop.RewardUIController$$Claim
void Rotatelab_Shop_RewardUIController__Claim (Rotatelab_Shop_RewardUIController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010e4824) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.RewardUIController$$Claim
   void Rotatelab_Shop_RewardUIController__Claim (Rotatelab_Shop_RewardUIController_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_RewardUIController__Claim_10d449c(int param_1)

{
  int **ppiVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uStack_4c;
  int **ppiStack_48;
  int **ppiStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  int *piStack_2c;
  int *piStack_28;
  
  pcVar9 = (char *)(_UNK_010e4ab8 + 0x10e44b4);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4abc + 0x10e44c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ac0 + 0x10e44d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ac4 + 0x10e44e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ac8 + 0x10e44ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4acc + 0x10e44f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ad0 + 0x10e4504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ad4 + 0x10e4510));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ad8 + 0x10e451c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4adc + 0x10e4528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ae0 + 0x10e4534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ae4 + 0x10e4540));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4ae8 + 0x10e454c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4aec + 0x10e4558));
    *pcVar9 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x0;
  uStack_40 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piStack_28 = (int *)UnityEngine_Transform__GetEnumerator_36176b0(iVar2,0);
  ppiStack_44 = &piStack_2c;
  ppiStack_48 = &piStack_28;
  uStack_4c = 0;
  piVar10 = *(int **)(_UNK_010e4af0 + 0x10e45d4);
  piVar11 = *(int **)(_UNK_010e4af4 + 0x10e45dc);
  piVar12 = *(int **)(_UNK_010e4af8 + 0x10e45e4);
  do {
    piVar4 = piStack_28;
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piStack_28;
    iVar6 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_010e4640;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piStack_28,iVar6,0);
LAB_010e4640:
    iVar2 = (*(code *)*puVar3)(piVar4,puVar3[1]);
    piVar4 = piStack_28;
    if (iVar2 == 0) {
      piVar11 = *(int **)(_UNK_010e4afc + 0x10e47a4);
      piVar10 = (int *)thunk_FUN_00f00bc8(piStack_28,*piVar11);
      piStack_2c = piVar10;
      if (piVar10 == (int *)0x0) goto LAB_010e481c;
      iVar2 = *piVar10;
      iVar6 = *piVar11;
      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar7 == 0) goto LAB_010e47f0;
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      break;
    }
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piStack_28;
    iVar6 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 200);
          goto LAB_010e46b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piStack_28,iVar6,1);
LAB_010e46b8:
    piVar4 = (int *)(*(code *)*puVar3)(piVar4,puVar3[1]);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *piVar11;
    iVar2 = *piVar4;
    uVar7 = (uint)*(byte *)(iVar6 + 0xb8);
    if ((*(byte *)(iVar2 + 0xb8) < uVar7) ||
       (*(int *)(*(int *)(iVar2 + 100) + uVar7 * 4 + -4) != iVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar4);
    }
    if ((*(byte *)(iVar2 + 0xb8) < uVar7) ||
       (*(int *)(*(int *)(iVar2 + 100) + uVar7 * 4 + -4) != iVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar4);
    }
    uVar5 = UnityEngine_Component__get_gameObject_35fe360(piVar4,0);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__Destroy_3609820(uVar5,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar11 = piVar11 + 2;
    if (uVar7 == 0) break;
    if (piVar11[-1] == iVar6) {
      puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
      goto LAB_010e480c;
    }
  }
LAB_010e47f0:
  puVar3 = (undefined4 *)FUN_00efdb38(piVar10,iVar6,0);
LAB_010e480c:
  (*(code *)*puVar3)(piVar10,puVar3[1]);
LAB_010e481c:
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = 0;
  Rotatelab_UI_PopupController__Hide_1124930(*(int *)(param_1 + 0x18),0);
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar3 = *(undefined4 **)(_UNK_010e4b00 + 0x10e4870);
  System_Collections_Generic_Queue_RewardData___Peek_18fd9a0
            (&uStack_4c,*(int *)(param_1 + 0x28),*puVar3);
  ppiVar1 = ppiStack_48;
  puVar13 = *(undefined4 **)(_UNK_010e4b04 + 0x10e4884);
  while( true ) {
    if (ppiVar1 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)ppiVar1[3] <= (int)uVar7) break;
    piVar10 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                               (ppiVar1,uVar7,*puVar13);
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar10 + 0xe8))
              (piVar10,*(undefined4 *)(iVar2 + uVar7 * 4 + 0x10),*(undefined4 *)(*piVar10 + 0xec));
    uVar7 = uVar7 + 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Queue_RewardData___Peek_18fd9a0
            (&uStack_4c,*(int *)(param_1 + 0x28),*puVar3);
  if (ppiStack_48 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_40,ppiStack_48,**(undefined4 **)(_UNK_010e4b08 + 0x10e4940));
  uStack_4c = 0;
  puVar13 = *(undefined4 **)(_UNK_010e4b0c + 0x10e4960);
  ppiStack_48 = (int **)&uStack_40;
  while (iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_40,*puVar13), iVar2 != 0) {
    if (piStack_34 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piStack_34 + 0xe0))(piStack_34,*(undefined4 *)(*piStack_34 + 0xe4));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_40,**(undefined4 **)(_UNK_010e4b10 + 0x10e49a4));
  if (*(int *)(param_1 + 0x28) != 0) {
    System_Collections_Generic_Queue_RewardData___Dequeue_18fd8d8
              (&uStack_4c,*(int *)(param_1 + 0x28),**(undefined4 **)(_UNK_010e4b18 + 0x10e49cc));
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (0 < *(int *)(*(int *)(param_1 + 0x28) + 0x14)) {
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Queue_RewardData___Peek_18fd9a0
                (&uStack_4c,*(int *)(param_1 + 0x28),*puVar3);
      Rotatelab_Shop_RewardUIController__ShowReward_10d4068(param_1,uStack_4c,ppiStack_48);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

