/* IL2CPP: Rotatelab.Shop.StarChallengeSO$$GetRewardType
Rotatelab_Shop_StarChallengeSO_RewardTypeData_o* Rotatelab_Shop_StarChallengeSO__GetRewardType (Rotatelab_Shop_StarChallengeSO_o* __this, int32_t currencyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0147aea0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeSO$$GetRewardType
   Rotatelab_Shop_StarChallengeSO_RewardTypeData_o* Rotatelab_Shop_StarChallengeSO__GetRewardType
   (Rotatelab_Shop_StarChallengeSO_o* __this, int32_t currencyType, const MethodInfo* method); */

undefined4 Rotatelab_Shop_StarChallengeSO__GetRewardType_10c39c8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  
  pcVar11 = (char *)(_UNK_010d3a9c + 0x10d39e0);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3aa0 + 0x10d39f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3aa4 + 0x10d3a00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3aa8 + 0x10d3a0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3aac + 0x10d3a18));
    *pcVar11 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d3ab0 + 0x10d3a2c));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar2 = *(undefined4 **)(_UNK_010d3ab4 + 0x10d3a54);
  piVar10 = *(int **)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar3 = thunk_FUN_00f00cdc(*puVar2);
  System_Func_object__bool____ctor_239b120
            (iVar3,iVar1,**(undefined4 **)(_UNK_010d3ab8 + 0x10d3a78),0);
  iVar1 = **(int **)(_UNK_010d3abc + 0x10d3a90);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0147af30 + 0x147ac1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0147af34 + 0x147ac28));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      FUN_00efd7c4(iVar1);
    }
  }
  if (piVar10 == (int *)0x0) {
    uVar5 = *(undefined4 *)(_UNK_0147af38 + 0x147aecc);
  }
  else {
    if (iVar3 != 0) {
      iVar6 = **(int **)(iVar1 + 0x1c);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = FUN_00efd768(iVar6);
      }
      iVar4 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar6) {
            puVar2 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
            goto LAB_0147acc0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar10,iVar6,0);
LAB_0147acc0:
      piVar10 = (int *)(*(code *)*puVar2)(piVar10,puVar2[1]);
      piVar8 = *(int **)(_UNK_0147af40 + 0x147acf0);
      do {
        if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar8) {
              puVar2 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
              goto LAB_0147ad4c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piVar10,*piVar8,0);
LAB_0147ad4c:
        iVar6 = (*(code *)*puVar2)(piVar10,puVar2[1]);
        if (iVar6 == 0) {
          iVar1 = 0xb;
          uVar5 = 0;
          goto LAB_0147ae24;
        }
        if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = FUN_00efd768(iVar6);
        }
        iVar4 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar6) {
              puVar2 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
              goto LAB_0147ade4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piVar10,iVar6,0);
LAB_0147ade4:
        uVar5 = (*(code *)*puVar2)(piVar10,puVar2[1]);
        iVar6 = (**(code **)(iVar3 + 0xc))
                          (*(undefined4 *)(iVar3 + 0x20),uVar5,*(undefined4 *)(iVar3 + 0x14));
      } while (iVar6 == 0);
      iVar1 = 10;
LAB_0147ae24:
      if (piVar10 != (int *)0x0) {
        iVar3 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_0147af44 + 0x147ae40)) {
              puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
              goto LAB_0147ae88;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_0147af44 + 0x147ae40),0);
LAB_0147ae88:
        (*(code *)*puVar2)(piVar10,puVar2[1]);
      }
      if (iVar1 == 0xb || iVar1 == 0) {
        uVar5 = 0;
      }
      return uVar5;
    }
    uVar5 = *(undefined4 *)(_UNK_0147af3c + 0x147aed8);
  }
  uVar5 = thunk_FUN_00f23fd0(uVar5);
  uVar5 = System_Linq_Error__ArgumentNull_2d26200(uVar5,0);
  func_0x00ec3920(uVar5,iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

