/* IL2CPP: Rotatelab.Scripts.LevelManager.<LoadLevelDataAsync>d__42$$MoveNext
void Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_d__42__MoveNext (Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_d__42_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager.<LoadLevelDataAsync>d__42$$MoveNext
   void Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_d__42__MoveNext
   (Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_d__42_o __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_d__42__MoveNext_106b600(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uStack_58;
  int iStack_50;
  undefined4 uStack_44;
  undefined8 uStack_40;
  int iStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_0107bc1c + 0x107b618);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bc20 + 0x107b62c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bc24 + 0x107b638));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bc28 + 0x107b644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bc2c + 0x107b650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bc30 + 0x107b65c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bc34 + 0x107b668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bc38 + 0x107b674));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bc3c + 0x107b680));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bc40 + 0x107b68c));
    *pcVar6 = '\x01';
  }
  iVar10 = param_1[5];
  uStack_30 = 0;
  iStack_28 = 0;
  uStack_40 = 0;
  iStack_38 = 0;
  uStack_44 = 0;
  if (*param_1 == 0) {
    uStack_30 = *(undefined8 *)(param_1 + 9);
    iStack_28 = param_1[0xb];
    *param_1 = -1;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    piVar4 = (int *)uStack_30;
    goto LAB_0107b8a0;
  }
  uVar9 = *(byte *)(param_1 + 4) ^ 1;
  param_1[7] = uVar9;
  do {
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Scripts_LevelManager__GetLevelDataAssetReference_10695f0
                      (iVar10,param_1[6],uVar9 == 0);
    piVar4 = param_1 + 8;
    *piVar4 = iVar1;
    thunk_FUN_00ec5080(piVar4);
    if (*piVar4 == 0) {
      iVar1 = 0;
      break;
    }
    Rotatelab_Networking_AdvancedAssetReference_object___LoadAssetAsync_1f1cb1c
              (&uStack_58,*piVar4,**(undefined4 **)(_UNK_0107bc44 + 0x107b750));
    iStack_38 = iStack_50;
    uStack_40 = uStack_58;
    uStack_58 = 0;
    iStack_50 = 0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_0107bc48 + 0x107b770) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    iStack_50 = iStack_38;
    uStack_58 = uStack_40;
    thunk_FUN_00ec5080(&uStack_58,0);
    iStack_28 = iStack_50;
    uStack_30 = uStack_58;
    iVar1 = *(int *)(**(int **)(_UNK_0107bc4c + 0x107b7c8) + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    piVar5 = (int *)uStack_30;
    piVar4 = (int *)0x0;
    if ((int *)uStack_30 != (int *)0x0) {
      iVar8 = (int)(short)iStack_28;
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar5;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar4[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar4 * 8 + 200);
            goto LAB_0107b880;
          }
          uVar9 = uVar9 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar5,iVar1,1);
LAB_0107b880:
      iVar1 = (*(code *)*puVar3)(piVar5,iVar8,puVar3[1]);
      piVar4 = piVar5;
      if (iVar1 == 0) {
        *param_1 = 0;
        param_1[0xb] = iStack_28;
        *(undefined8 *)(param_1 + 9) = uStack_30;
        thunk_FUN_00ec5080(param_1 + 9);
        func_0x01080c84(param_1 + 1,&uStack_30,param_1,**(undefined4 **)(_UNK_0107bc50 + 0x107bb04))
        ;
        return;
      }
    }
LAB_0107b8a0:
    if (piVar4 == (int *)0x0) {
      iVar1 = uStack_30._4_4_;
    }
    else {
      iVar8 = (int)(short)iStack_28;
      iVar1 = *(int *)(**(int **)(_UNK_0107bc54 + 0x107b8b4) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar4;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
            goto LAB_0107b940;
          }
          uVar9 = uVar9 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar4,iVar1,0);
LAB_0107b940:
      iVar1 = (*(code *)*puVar3)(piVar4,iVar8,puVar3[1]);
    }
    if (*(int *)(**(int **)(_UNK_0107bc58 + 0x107b964) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__op_Inequality_36018e4(iVar1,0,0);
    if (iVar8 != 0) {
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = param_1[8];
      uVar7 = *(undefined4 *)(iVar10 + 0x20);
      if (*(int *)(**(int **)(_UNK_0107bc5c + 0x107ba00) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__AddUnique_object__1484964
                (uVar7,iVar8,**(undefined4 **)(_UNK_0107bc60 + 0x107ba24));
      break;
    }
    piVar5 = param_1 + 8;
    piVar4 = (int *)*piVar5;
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar4 + 0x150))(piVar4,*(undefined4 *)(*piVar4 + 0x154));
    iVar1 = 0;
    *piVar5 = 0;
    thunk_FUN_00ec5080(piVar5,0);
    uVar9 = param_1[7] + 1;
    param_1[7] = uVar9;
  } while ((int)uVar9 < 2);
  piVar4 = (int *)param_1[1];
  *param_1 = -2;
  if (piVar4 == (int *)0x0) {
    param_1[3] = iVar1;
    thunk_FUN_00ec5080(param_1 + 3,iVar1);
  }
  else {
    iVar10 = *(int *)(**(int **)(_UNK_0107bc6c + 0x107ba50) + 0x10);
    if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
      iVar10 = FUN_00efd768();
    }
    iVar10 = *(int *)(*(int *)(iVar10 + 0x60) + 4);
    if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
      iVar10 = FUN_00efd768(iVar10);
    }
    iVar8 = *piVar4;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == iVar10) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd0);
          goto LAB_0107bb24;
        }
        uVar9 = uVar9 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar4,iVar10,2);
LAB_0107bb24:
    (*(code *)*puVar3)(piVar4,iVar1,puVar3[1]);
  }
  return;
}

