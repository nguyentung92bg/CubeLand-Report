/* IL2CPP: Rotatelab.Scripts.SolutionGuideController$$Awake
void Rotatelab_Scripts_SolutionGuideController__Awake (Rotatelab_Scripts_SolutionGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SolutionGuideController$$Awake
   void Rotatelab_Scripts_SolutionGuideController__Awake
   (Rotatelab_Scripts_SolutionGuideController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_SolutionGuideController__Awake_1052e10(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  pcVar6 = (char *)(_UNK_01062f78 + 0x1062e28);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062f7c + 0x1062e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062f80 + 0x1062e48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062f84 + 0x1062e54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062f88 + 0x1062e60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062f8c + 0x1062e6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062f90 + 0x1062e78));
    *pcVar6 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01062f94 + 0x1062e8c));
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  uVar11 = *(undefined4 *)(param_1 + 0x14);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01062f98 + 0x1062eb0));
  Rotatelab_Scripts_BlasterHighlight___ctor_ff62b4(uVar3,uVar10,uVar11,uVar8,uVar7,param_1,0);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar3);
  piVar9 = *(int **)(_UNK_01062f9c + 0x1062ef8);
  iVar4 = *piVar9;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar9;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x124);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01062fa0 + 0x1062f1c));
  System_Action_object____ctor_1f11414(uVar3,param_1,**(undefined4 **)(_UNK_01062fa4 + 0x1062f3c),0)
  ;
  uVar3 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar3,**(undefined4 **)(_UNK_01062fa8 + 0x1062f54));
  puVar5 = (undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x124);
  *puVar5 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

