/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$RePos
void Rotatelab_Shop_BaseOfferButtonsParent__RePos (Rotatelab_Shop_BaseOfferButtonsParent_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010dde68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BaseOfferButtonsParent$$RePos
   void Rotatelab_Shop_BaseOfferButtonsParent__RePos (Rotatelab_Shop_BaseOfferButtonsParent_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_BaseOfferButtonsParent__RePos_10cdad4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  
  Rotatelab_Shop_BaseOfferButtonsParent__ApplyOrder_10cdaf0(*(undefined4 *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  pcVar7 = (char *)(_UNK_010ddeb8 + 0x10ddb08);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddebc + 0x10ddb1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddec0 + 0x10ddb28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddec4 + 0x10ddb34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddec8 + 0x10ddb40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ddecc + 0x10ddb4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dded0 + 0x10ddb58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dded4 + 0x10ddb64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dded8 + 0x10ddb70));
    *pcVar7 = '\x01';
  }
  piVar10 = *(int **)(_UNK_010ddedc + 0x10ddb88);
  iVar2 = *piVar10;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar10;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x5c);
  iVar8 = puVar3[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar9 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ddee0 + 0x10ddbd4));
    System_Func_object__int____ctor_239b264
              (iVar8,uVar9,**(undefined4 **)(_UNK_010ddee4 + 0x10ddbf4),0);
    piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
    *piVar10 = iVar8;
    thunk_FUN_00ec5080(piVar10,iVar8);
  }
  piVar10 = (int *)System_Linq_Enumerable__OrderBy_object__int__146d7a0
                             (uVar1,iVar8,**(undefined4 **)(_UNK_010ddee8 + 0x10ddc20));
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar10;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_010ddeec + 0x10ddc48)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
        goto LAB_010ddc90;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_010ddeec + 0x10ddc48),0);
LAB_010ddc90:
  piVar10 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
  piVar5 = *(int **)(_UNK_010ddef0 + 0x10ddcc0);
  piVar11 = *(int **)(_UNK_010ddef4 + 0x10ddcc8);
  iVar2 = 0;
  do {
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *piVar10;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar5) {
          puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_010ddd28;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar10,*piVar5,0);
LAB_010ddd28:
    iVar8 = (*(code *)*puVar3)(piVar10,puVar3[1]);
    if (iVar8 == 0) {
      if (piVar10 == (int *)0x0) {
        return;
      }
      iVar2 = *piVar10;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 == 0) goto LAB_010dde34;
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      break;
    }
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *piVar10;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_010ddda0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar10,*piVar11,0);
LAB_010ddda0:
    iVar8 = (*(code *)*puVar3)(piVar10,puVar3[1]);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__SetSiblingIndex_3616e84(*(int *)(iVar8 + 8),iVar2,0);
    iVar2 = iVar2 + 1;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 2;
    if (uVar4 == 0) break;
    if (piVar5[-1] == **(int **)(_UNK_010ddef8 + 0x10dde08)) {
      puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
      goto LAB_010dde50;
    }
  }
LAB_010dde34:
  puVar3 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_010ddef8 + 0x10dde08),0);
LAB_010dde50:
  (*(code *)*puVar3)(piVar10,puVar3[1]);
  return;
}

