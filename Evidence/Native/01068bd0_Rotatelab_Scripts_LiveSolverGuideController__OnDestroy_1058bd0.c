/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnDestroy
void Rotatelab_Scripts_LiveSolverGuideController__OnDestroy (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$OnDestroy
   void Rotatelab_Scripts_LiveSolverGuideController__OnDestroy
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__OnDestroy_1058bd0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  pcVar5 = (char *)(_UNK_01068eb8 + 0x1068be4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ebc + 0x1068bf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ec0 + 0x1068c04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ec4 + 0x1068c10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ec8 + 0x1068c1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ecc + 0x1068c28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ed0 + 0x1068c34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ed4 + 0x1068c40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ed8 + 0x1068c4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068edc + 0x1068c58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ee0 + 0x1068c64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ee4 + 0x1068c70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ee8 + 0x1068c7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068eec + 0x1068c88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ef0 + 0x1068c94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068ef4 + 0x1068ca0));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01068ef8 + 0x1068cb4);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x124);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01068efc + 0x1068cd8));
  System_Action_object____ctor_1f11414(uVar3,param_1,**(undefined4 **)(_UNK_01068f00 + 0x1068cf8),0)
  ;
  uVar3 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar6,uVar3,**(undefined4 **)(_UNK_01068f04 + 0x1068d10));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124) = uVar3;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 8);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01068f08 + 0x1068d40));
  System_Action_object____ctor_1f11414(uVar3,param_1,**(undefined4 **)(_UNK_01068f0c + 0x1068d60),0)
  ;
  uVar3 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar6,uVar3,**(undefined4 **)(_UNK_01068f10 + 0x1068d78));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 8) = uVar3;
  thunk_FUN_00ec5080();
  piVar8 = *(int **)(_UNK_01068f14 + 0x1068da0);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  uVar6 = **(undefined4 **)(iVar2 + 0x5c);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01068f18 + 0x1068dc4));
  System_Action_Int32Enum__int____ctor_1f18658
            (uVar3,param_1,**(undefined4 **)(_UNK_01068f1c + 0x1068de4),0);
  uVar3 = Rotatelab_GameAction_Int32Enum__int___op_Subtraction_23a4710
                    (uVar6,uVar3,**(undefined4 **)(_UNK_01068f20 + 0x1068dfc));
  **(undefined4 **)(*piVar8 + 0x5c) = uVar3;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar8 + 0x5c));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01068f24 + 0x1068e2c));
  if (*(int *)(**(int **)(_UNK_01068f28 + 0x1068e40) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Inequality_36018e4(iVar2,0,0);
  if (iVar4 != 0) {
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01068f2c + 0x1068e74));
    System_Action_object____ctor_1f11414
              (uVar3,param_1,**(undefined4 **)(_UNK_01068f30 + 0x1068e90),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar5 = (char *)(_UNK_01050ee0 + 0x1050e54);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01050ee4 + 0x1050e68));
      *pcVar5 = '\x01';
    }
    puVar9 = *(undefined4 **)(_UNK_01050ee8 + 0x1050e80);
    iVar4 = *(int *)(iVar2 + 0xbc);
    do {
      iVar7 = 0;
      iVar1 = System_Delegate__Remove_2bbcc8c(iVar4,uVar3,0);
      if (iVar1 != 0) {
        uVar6 = *puVar9;
        iVar7 = thunk_FUN_00f00bc8(iVar1,uVar6);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00ec3e28(iVar1,uVar6);
        }
      }
      iVar1 = FUN_00efd180((int *)(iVar2 + 0xbc),iVar7,iVar4);
      bVar10 = iVar1 != iVar4;
      iVar4 = iVar1;
    } while (bVar10);
    return;
  }
  return;
}

