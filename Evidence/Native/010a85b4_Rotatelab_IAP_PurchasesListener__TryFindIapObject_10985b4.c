/* IL2CPP: Rotatelab.IAP.PurchasesListener$$TryFindIapObject
bool Rotatelab_IAP_PurchasesListener__TryFindIapObject (Rotatelab_IAP_PurchasesListener_o* __this, System_String_o* productId, System_String_o* rewardKey, Rotatelab_IAP_IapObject_o** iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$TryFindIapObject
   bool Rotatelab_IAP_PurchasesListener__TryFindIapObject (Rotatelab_IAP_PurchasesListener_o*
   __this, System_String_o* productId, System_String_o* rewardKey, Rotatelab_IAP_IapObject_o**
   iapObject, const MethodInfo* method); */

bool Rotatelab_IAP_PurchasesListener__TryFindIapObject_10985b4
               (int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  
  pcVar10 = (char *)(_UNK_010a8754 + 0x10a85d4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8758 + 0x10a85ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a875c + 0x10a85f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8760 + 0x10a8604));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8764 + 0x10a8610));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a8768 + 0x10a861c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a876c + 0x10a8628));
    *pcVar10 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a8770 + 0x10a863c));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),param_2);
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0xc),param_3);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  puVar11 = *(undefined4 **)(_UNK_010a8774 + 0x10a8688);
  uVar2 = thunk_FUN_00f00cdc(*puVar11);
  System_Predicate_object____ctor_1876380
            (uVar2,iVar1,**(undefined4 **)(_UNK_010a8778 + 0x10a86a4),0);
  piVar13 = *(int **)(_UNK_010a877c + 0x10a86b8);
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar14 = *(int **)(_UNK_010a8780 + 0x10a86e0);
  iVar3 = Rotatelab_Extensions__TryFind_object__14899b0(uVar8,uVar2,param_4,*piVar14);
  if (iVar3 != 0) {
    return true;
  }
  piVar9 = *(int **)(param_1 + 0x10);
  iVar3 = thunk_FUN_00f00cdc(*puVar11);
  System_Predicate_object____ctor_1876380
            (iVar3,iVar1,**(undefined4 **)(_UNK_010a8784 + 0x10a871c),0);
  if (*(int *)(*piVar13 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = *piVar14;
  if ((*(int *)(iVar1 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01499a28 + 0x14999dc)), *(int *)(iVar1 + 0x1c) == 0)) {
    FUN_00efd7c4(iVar1);
  }
  if (*(int *)(**(int **)(_UNK_01499a2c + 0x14999fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  iVar15 = 0;
  do {
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x1c);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = FUN_00efd768(iVar6);
    }
    iVar4 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar13[-1] == iVar6) {
          puVar11 = (undefined4 *)(iVar4 + *piVar13 * 8 + 0xc0);
          goto LAB_0149a000;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined4 *)FUN_00efdb38(piVar9,iVar6,0);
LAB_0149a000:
    iVar6 = (*(code *)*puVar11)(piVar9,puVar11[1]);
    if (iVar6 <= iVar15) {
      *param_4 = 0;
LAB_0149a178:
      return iVar15 < iVar6;
    }
    iVar4 = **(int **)(iVar1 + 0x1c);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = FUN_00efd768(iVar4);
    }
    iVar5 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar13[-1] == iVar4) {
          puVar11 = (undefined4 *)(iVar5 + *piVar13 * 8 + 0xc0);
          goto LAB_0149a088;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined4 *)FUN_00efdb38(piVar9,iVar4,0);
LAB_0149a088:
    iVar4 = (*(code *)*puVar11)(piVar9,iVar15,puVar11[1]);
    iVar5 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = FUN_00efd768(iVar5);
    }
    iVar5 = thunk_FUN_00f00bc8(iVar4,iVar5);
    if (iVar5 != 0) {
      iVar5 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768(iVar5);
      }
      iVar12 = 0;
      if ((iVar4 != 0) && (iVar12 = thunk_FUN_00f00bc8(iVar4,iVar5), iVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar4,iVar5);
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),iVar12,*(undefined4 *)(iVar3 + 0x14));
      if (iVar4 != 0) {
        *param_4 = iVar12;
        thunk_FUN_00ec5080(param_4,iVar12);
        goto LAB_0149a178;
      }
    }
    iVar15 = iVar15 + 1;
  } while( true );
}

