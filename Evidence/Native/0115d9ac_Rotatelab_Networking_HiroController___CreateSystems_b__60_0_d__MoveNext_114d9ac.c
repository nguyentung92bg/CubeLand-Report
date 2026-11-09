/* IL2CPP: Rotatelab.Networking.HiroController.<<CreateSystems>b__60_0>d$$MoveNext
void Rotatelab_Networking_HiroController___CreateSystems_b__60_0_d__MoveNext (Rotatelab_Networking_HiroController___CreateSystems_b__60_0_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<<CreateSystems>b__60_0>d$$MoveNext
   void Rotatelab_Networking_HiroController___CreateSystems_b__60_0_d__MoveNext
   (Rotatelab_Networking_HiroController___CreateSystems_b__60_0_d_o __this, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController___CreateSystems_b__60_0_d__MoveNext_114d9ac(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined8 uStack_58;
  int iStack_50;
  undefined4 uStack_44;
  undefined8 uStack_40;
  int iStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_0115de0c + 0x115d9c4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115de10 + 0x115d9d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115de14 + 0x115d9e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115de18 + 0x115d9f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115de1c + 0x115d9fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115de20 + 0x115da08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115de24 + 0x115da14));
    *pcVar7 = '\x01';
  }
  uStack_30 = 0;
  iStack_28 = 0;
  uStack_40 = 0;
  iStack_38 = 0;
  uStack_44 = 0;
  if (*param_1 == 0) {
    uStack_30 = *(undefined8 *)(param_1 + 6);
    iStack_28 = param_1[8];
    *param_1 = -1;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    piVar8 = (int *)uStack_30;
LAB_0115dbdc:
    if (piVar8 != (int *)0x0) {
      iVar9 = (int)(short)iStack_28;
      iVar1 = *(int *)(**(int **)(_UNK_0115de40 + 0x115dbf0) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar8;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_0115dcd8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar8,iVar1,0);
LAB_0115dcd8:
      uVar4 = (*(code *)*puVar3)(piVar8,iVar9,puVar3[1]);
      goto LAB_0115dcf0;
    }
  }
  else {
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_HiroController__AuthenticateNakamaAsync_114aac8
              (&uStack_58,param_1[4],param_1[5]);
    iStack_38 = iStack_50;
    uStack_40 = uStack_58;
    uStack_58 = 0;
    iStack_50 = 0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_0115de28 + 0x115da84) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    iStack_50 = iStack_38;
    uStack_58 = uStack_40;
    thunk_FUN_00ec5080(&uStack_58,0);
    iStack_28 = iStack_50;
    uStack_30 = uStack_58;
    iVar1 = *(int *)(**(int **)(_UNK_0115de2c + 0x115dadc) + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    piVar8 = (int *)uStack_30;
    if ((int *)uStack_30 != (int *)0x0) {
      iVar9 = (int)(short)iStack_28;
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar8;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 200);
            goto LAB_0115dbbc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar8,iVar1,1);
LAB_0115dbbc:
      iVar1 = (*(code *)*puVar3)(piVar8,iVar9,puVar3[1]);
      if (iVar1 == 0) {
        *param_1 = 0;
        param_1[8] = iStack_28;
        *(undefined8 *)(param_1 + 6) = uStack_30;
        thunk_FUN_00ec5080(param_1 + 6);
        if (*(int *)(**(int **)(_UNK_0115de30 + 0x115dc9c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___AwaitUnsafeOnCompleted_UniTask_Awaiter_object___HiroController___CreateSystems_b__60_0_d__1217fdc
                  (param_1 + 1,&uStack_30,param_1,**(undefined4 **)(_UNK_0115de34 + 0x115dcb8));
        return;
      }
      goto LAB_0115dbdc;
    }
  }
  uVar4 = uStack_30._4_4_;
LAB_0115dcf0:
  iVar1 = *(int *)(**(int **)(_UNK_0115de38 + 0x115dd00) + 0x74);
  *param_1 = -2;
  if (iVar1 == 0) {
    FUN_00ec3934();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___SetResult_17c08c0
            (param_1 + 1,uVar4,**(undefined4 **)(_UNK_0115de3c + 0x115dd24));
  return;
}

