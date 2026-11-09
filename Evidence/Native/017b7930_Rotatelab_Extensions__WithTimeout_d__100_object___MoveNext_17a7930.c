/* IL2CPP: Rotatelab.Extensions.<WithTimeout>d__100<object>$$MoveNext
void Rotatelab_Extensions__WithTimeout_d__100_object___MoveNext (Rotatelab_Extensions__WithTimeout_d__100_object__o __this, const MethodInfo_17A7930* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions.<WithTimeout>d__100<object>$$MoveNext
   void Rotatelab_Extensions__WithTimeout_d__100_object___MoveNext
   (Rotatelab_Extensions__WithTimeout_d__100_object__o __this, const MethodInfo_17A7930* method); */

void Rotatelab_Extensions__WithTimeout_d__100_object___MoveNext_17a7930(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uStack_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_4c;
  uint uStack_48;
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
    iVar1 = *(int *)(param_2 + 0x10);
    iVar11 = param_1[4];
    iVar6 = param_1[5];
    iVar5 = param_1[6];
    iVar8 = param_1[8];
    iVar10 = param_1[9];
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    Cysharp_Threading_Tasks_UniTaskExtensions__TimeoutWithoutException_object__1651298
              (&uStack_60,iVar11,iVar6,iVar5,iVar8,iVar10,1,8,0,
               *(undefined4 *)(*(int *)(iVar1 + 0x60) + 8));
    iVar1 = *(int *)(param_2 + 0x10);
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    iStack_40 = iStack_58;
    iStack_3c = iStack_54;
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    uStack_5c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_58 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_54 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    if ((*(byte *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x10) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    uStack_60 = uStack_48;
    uStack_5c = uStack_44;
    iStack_58 = iStack_40;
    iStack_54 = iStack_3c;
    thunk_FUN_00ec5080(&uStack_60,0);
    uStack_38 = CONCAT44(uStack_5c,uStack_60);
    uStack_30 = CONCAT44(iStack_54,iStack_58);
    iVar1 = *(int *)(param_2 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x1c) + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    piVar7 = (int *)uStack_38;
    if ((int *)uStack_38 != (int *)0x0) {
      iVar5 = (int)uStack_30._4_2_;
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar6 = *piVar7;
      uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar4[-1] == iVar1) {
            puVar2 = (undefined4 *)(iVar6 + *piVar4 * 8 + 200);
            goto LAB_017b7b10;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)FUN_00efdb38(piVar7,iVar1,1);
LAB_017b7b10:
      iVar1 = (*(code *)*puVar2)(piVar7,iVar5,puVar2[1]);
      if (iVar1 == 0) {
        *param_1 = 0;
        param_1[0xb] = (int)(int *)uStack_38;
        param_1[0xc] = uStack_38._4_4_;
        param_1[0xd] = (uint)uStack_30;
        param_1[0xe] = uStack_30._4_4_;
        thunk_FUN_00ec5080();
        iVar1 = *(int *)(param_2 + 0x10);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = FUN_00efd768();
        }
        func_0x012463ec(param_1 + 1,&uStack_38,param_1,
                        *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x28));
        return;
      }
    }
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  piVar7 = (int *)uStack_38;
  if ((int *)uStack_38 == (int *)0x0) {
    uVar3 = uStack_38._4_4_;
    uVar9 = (uint)uStack_30;
  }
  else {
    iVar5 = (int)uStack_30._4_2_;
    iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x38) + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar6 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar4[-1] == iVar1) {
          puVar2 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xc0);
          goto LAB_017b7be4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar7,iVar1,0);
LAB_017b7be4:
    (*(code *)*puVar2)(&uStack_60,piVar7,iVar5,puVar2[1]);
    uVar3 = uStack_60;
    uVar9 = uStack_5c;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if ((uVar3 & 1) != 0) {
    uVar9 = param_1[10];
  }
  *param_1 = -2;
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  piVar7 = (int *)param_1[1];
  if (piVar7 == (int *)0x0) {
    param_1[3] = uVar9;
    thunk_FUN_00ec5080(param_1 + 3,uVar9);
  }
  else {
    iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x48) + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar5 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar4[-1] == iVar1) {
          puVar2 = (undefined4 *)(iVar5 + *piVar4 * 8 + 0xd0);
          goto LAB_017b7cd0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar7,iVar1,2);
LAB_017b7cd0:
    (*(code *)*puVar2)(piVar7,uVar9,puVar2[1]);
  }
  return;
}

