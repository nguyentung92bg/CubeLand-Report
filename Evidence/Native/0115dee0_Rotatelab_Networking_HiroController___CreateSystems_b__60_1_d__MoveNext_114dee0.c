/* IL2CPP: Rotatelab.Networking.HiroController.<<CreateSystems>b__60_1>d$$MoveNext
void Rotatelab_Networking_HiroController___CreateSystems_b__60_1_d__MoveNext (Rotatelab_Networking_HiroController___CreateSystems_b__60_1_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<<CreateSystems>b__60_1>d$$MoveNext
   void Rotatelab_Networking_HiroController___CreateSystems_b__60_1_d__MoveNext
   (Rotatelab_Networking_HiroController___CreateSystems_b__60_1_d_o __this, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController___CreateSystems_b__60_1_d__MoveNext_114dee0(int *param_1)

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
  
  pcVar7 = (char *)(_UNK_0115e340 + 0x115def8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115e344 + 0x115df0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115e348 + 0x115df18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115e34c + 0x115df24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115e350 + 0x115df30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115e354 + 0x115df3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115e358 + 0x115df48));
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
LAB_0115e110:
    if (piVar8 != (int *)0x0) {
      iVar9 = (int)(short)iStack_28;
      iVar1 = *(int *)(**(int **)(_UNK_0115e374 + 0x115e124) + 0x10);
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
            goto LAB_0115e20c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar8,iVar1,0);
LAB_0115e20c:
      uVar4 = (*(code *)*puVar3)(piVar8,iVar9,puVar3[1]);
      goto LAB_0115e224;
    }
  }
  else {
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_HiroController__AuthenticateSatoriAsync_114b670
              (&uStack_58,param_1[4],param_1[5]);
    iStack_38 = iStack_50;
    uStack_40 = uStack_58;
    uStack_58 = 0;
    iStack_50 = 0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_0115e35c + 0x115dfb8) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    iStack_50 = iStack_38;
    uStack_58 = uStack_40;
    thunk_FUN_00ec5080(&uStack_58,0);
    iStack_28 = iStack_50;
    uStack_30 = uStack_58;
    iVar1 = *(int *)(**(int **)(_UNK_0115e360 + 0x115e010) + 0x10);
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
            goto LAB_0115e0f0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar8,iVar1,1);
LAB_0115e0f0:
      iVar1 = (*(code *)*puVar3)(piVar8,iVar9,puVar3[1]);
      if (iVar1 == 0) {
        *param_1 = 0;
        param_1[8] = iStack_28;
        *(undefined8 *)(param_1 + 6) = uStack_30;
        thunk_FUN_00ec5080(param_1 + 6);
        if (*(int *)(**(int **)(_UNK_0115e364 + 0x115e1d0) + 0x74) == 0) {
          FUN_00ec3934();
        }
        System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___AwaitUnsafeOnCompleted_UniTask_Awaiter_object___HiroController___CreateSystems_b__60_1_d__12181ac
                  (param_1 + 1,&uStack_30,param_1,**(undefined4 **)(_UNK_0115e368 + 0x115e1ec));
        return;
      }
      goto LAB_0115e110;
    }
  }
  uVar4 = uStack_30._4_4_;
LAB_0115e224:
  iVar1 = *(int *)(**(int **)(_UNK_0115e36c + 0x115e234) + 0x74);
  *param_1 = -2;
  if (iVar1 == 0) {
    FUN_00ec3934();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___SetResult_17c08c0
            (param_1 + 1,uVar4,**(undefined4 **)(_UNK_0115e370 + 0x115e258));
  return;
}

