/* IL2CPP: Rotatelab.Extensions.<WithTimeout>d__100<Int32Enum>$$MoveNext
void Rotatelab_Extensions__WithTimeout_d__100_Int32Enum___MoveNext (Rotatelab_Extensions__WithTimeout_d__100_Int32Enum__o __this, const MethodInfo_17A742C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions.<WithTimeout>d__100<Int32Enum>$$MoveNext
   void Rotatelab_Extensions__WithTimeout_d__100_Int32Enum___MoveNext
   (Rotatelab_Extensions__WithTimeout_d__100_Int32Enum__o __this, const MethodInfo_17A742C* method);
    */

void Rotatelab_Extensions__WithTimeout_d__100_Int32Enum___MoveNext_17a742c(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_44 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_40 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = (ulonglong)uStack_44 << 0x20;
  uStack_30 = CONCAT44(iStack_3c,iStack_40);
  uStack_48 = 0;
  uStack_4c = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    uStack_38 = *(longlong *)(param_1 + 0xb);
    uStack_30 = *(undefined8 *)(param_1 + 0xd);
    param_1[0xb] = 0;
    param_1[0xc] = uStack_44;
    param_1[0xd] = iStack_40;
    param_1[0xe] = iStack_3c;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x10);
    iVar12 = param_1[4];
    iVar8 = param_1[5];
    iVar7 = param_1[6];
    iVar10 = param_1[8];
    iVar11 = param_1[9];
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    Cysharp_Threading_Tasks_UniTaskExtensions__TimeoutWithoutException_Int32Enum__165118c
              (&uStack_60,iVar12,iVar8,iVar7,iVar10,iVar11,1,8,0,
               *(undefined4 *)(*(int *)(iVar2 + 0x60) + 8));
    iVar2 = *(int *)(param_2 + 0x10);
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    iStack_40 = iStack_58;
    iStack_3c = iStack_54;
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    uStack_5c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_58 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_54 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    if ((*(byte *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x10) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    uStack_60 = uStack_48;
    uStack_5c = uStack_44;
    iStack_58 = iStack_40;
    iStack_54 = iStack_3c;
    thunk_FUN_00ec5080(&uStack_60,0);
    uStack_38 = CONCAT44(uStack_5c,uStack_60);
    uStack_30 = CONCAT44(iStack_54,iStack_58);
    iVar2 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x1c) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    piVar9 = (int *)uStack_38;
    if ((int *)uStack_38 != (int *)0x0) {
      iVar7 = (int)uStack_30._4_2_;
      iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768();
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = FUN_00efd768(iVar2);
      }
      iVar8 = *piVar9;
      uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 200);
            goto LAB_017b760c;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar9,iVar2,1);
LAB_017b760c:
      iVar2 = (*(code *)*puVar3)(piVar9,iVar7,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[0xb] = (int)(int *)uStack_38;
        param_1[0xc] = uStack_38._4_4_;
        param_1[0xd] = (uint)uStack_30;
        param_1[0xe] = uStack_30._4_4_;
        thunk_FUN_00ec5080();
        iVar2 = *(int *)(param_2 + 0x10);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = FUN_00efd768();
        }
        func_0x01246174(param_1 + 1,&uStack_38,param_1,
                        *(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x28));
        return;
      }
    }
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  piVar9 = (int *)uStack_38;
  if ((int *)uStack_38 == (int *)0x0) {
    uVar4 = (uint)uStack_30;
    bVar1 = uStack_38._4_1_;
  }
  else {
    iVar7 = (int)uStack_30._4_2_;
    iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x38) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x14);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar8 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar2) {
          puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_017b76e0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,iVar2,0);
LAB_017b76e0:
    (*(code *)*puVar3)(&uStack_60,piVar9,iVar7,puVar3[1]);
    uVar4 = uStack_5c;
    bVar1 = (byte)uStack_60;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if ((bVar1 & 1) != 0) {
    uVar4 = param_1[10];
  }
  *param_1 = -2;
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  piVar9 = (int *)param_1[1];
  if (piVar9 == (int *)0x0) {
    param_1[3] = uVar4;
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x48) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar7 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar2) {
          puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xd0);
          goto LAB_017b77c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,iVar2,2);
LAB_017b77c0:
    (*(code *)*puVar3)(piVar9,uVar4,puVar3[1]);
  }
  return;
}

