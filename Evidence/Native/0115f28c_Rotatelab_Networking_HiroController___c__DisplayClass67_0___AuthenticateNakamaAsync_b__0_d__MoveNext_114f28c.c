/* IL2CPP: Rotatelab.Networking.HiroController.<>c__DisplayClass67_0.<<AuthenticateNakamaAsync>b__0>d$$MoveNext
void Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__0_d__MoveNext (Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__0_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.HiroController.<>c__DisplayClass67_0.<<AuthenticateNakamaAsync>b__0>d$$MoveNext
   void 
   Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__0_d__MoveNext
   (Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__0_d_o
   __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController___c__DisplayClass67_0___AuthenticateNakamaAsync_b__0_d__MoveNext_114f28c
               (int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 uStack_50;
  int iStack_48;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  int iStack_30;
  undefined8 uStack_28;
  int iStack_20;
  
  pcVar6 = (char *)(_UNK_0115f758 + 0x115f2a4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f75c + 0x115f2b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f760 + 0x115f2c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f764 + 0x115f2d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f768 + 0x115f2dc));
    *pcVar6 = '\x01';
  }
  iVar8 = param_1[3];
  uStack_28 = 0;
  iStack_20 = 0;
  uStack_38 = 0;
  iStack_30 = 0;
  uStack_3c = 0;
  if (*param_1 == 0) {
    uStack_28 = *(undefined8 *)(param_1 + 4);
    iStack_20 = param_1[6];
    *param_1 = -1;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    piVar7 = (int *)uStack_28;
LAB_0115f4bc:
    if (piVar7 != (int *)0x0) {
      iVar9 = (int)(short)iStack_20;
      iVar1 = *(int *)(**(int **)(_UNK_0115f778 + 0x115f4d0) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
            goto LAB_0115f59c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar7,iVar1,0);
LAB_0115f59c:
      iVar1 = (*(code *)*puVar3)(piVar7,iVar9,puVar3[1]);
      goto LAB_0115f5b8;
    }
  }
  else {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar8 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_HiroController__TryAuthenticateWithSilentSignInAsync_114aecc
              (&uStack_50,*(int *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 8),
               *(undefined4 *)(iVar8 + 0x10));
    iStack_30 = iStack_48;
    uStack_38 = uStack_50;
    uStack_50 = 0;
    iStack_48 = 0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_0115f76c + 0x115f364) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    iStack_48 = iStack_30;
    uStack_50 = uStack_38;
    thunk_FUN_00ec5080(&uStack_50,0);
    iStack_20 = iStack_48;
    uStack_28 = uStack_50;
    iVar1 = *(int *)(**(int **)(_UNK_0115f770 + 0x115f3bc) + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    piVar7 = (int *)uStack_28;
    if ((int *)uStack_28 != (int *)0x0) {
      iVar9 = (int)(short)iStack_20;
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 200);
            goto LAB_0115f49c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar7,iVar1,1);
LAB_0115f49c:
      iVar1 = (*(code *)*puVar3)(piVar7,iVar9,puVar3[1]);
      if (iVar1 == 0) {
        *param_1 = 0;
        param_1[6] = iStack_20;
        *(undefined8 *)(param_1 + 4) = uStack_28;
        thunk_FUN_00ec5080(param_1 + 4);
        func_0x0117327c(param_1 + 1,&uStack_28,param_1,**(undefined4 **)(_UNK_0115f774 + 0x115f57c))
        ;
        return;
      }
      goto LAB_0115f4bc;
    }
  }
  iVar1 = uStack_28._4_4_;
LAB_0115f5b8:
  if (iVar1 == 0) {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar8 + 0x10);
  }
  else if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar8 + 0x10) = iVar1;
  thunk_FUN_00ec5080((int *)(iVar8 + 0x10),iVar1);
  iVar8 = _UNK_0115f77c;
  *param_1 = -2;
  if (*(char *)(iVar8 + 0x115f604) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115f780 + 0x115f618));
    *(char *)(iVar8 + 0x115f604) = '\x01';
  }
  piVar7 = (int *)param_1[1];
  if (piVar7 != (int *)0x0) {
    iVar8 = *piVar7;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0115f784 + 0x115f63c)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd0);
          goto LAB_0115f684;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_0115f784 + 0x115f63c),2);
LAB_0115f684:
    (*(code *)*puVar3)(piVar7,puVar3[1]);
  }
  return;
}

