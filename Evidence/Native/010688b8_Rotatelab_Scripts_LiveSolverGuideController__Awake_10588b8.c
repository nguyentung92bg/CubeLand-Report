/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$Awake
void Rotatelab_Scripts_LiveSolverGuideController__Awake (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$Awake
   void Rotatelab_Scripts_LiveSolverGuideController__Awake
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__Awake_10588b8(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pcVar5 = (char *)(_UNK_01068b64 + 0x10688d0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b68 + 0x10688e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b6c + 0x10688f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b70 + 0x10688fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b74 + 0x1068908));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b78 + 0x1068914));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b7c + 0x1068920));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b80 + 0x106892c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b84 + 0x1068938));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b88 + 0x1068944));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b8c + 0x1068950));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b90 + 0x106895c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b94 + 0x1068968));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01068b98 + 0x1068974));
    *pcVar5 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01068b9c + 0x1068988));
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01068ba0 + 0x10689ac));
  Rotatelab_Scripts_BlasterHighlight___ctor_ff62b4(uVar3,uVar10,uVar7,uVar9,uVar6,param_1,0);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x30),uVar3);
  piVar8 = *(int **)(_UNK_01068ba4 + 0x10689f0);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar8;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x124);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01068ba8 + 0x1068a14));
  System_Action_object____ctor_1f11414(uVar3,param_1,**(undefined4 **)(_UNK_01068bac + 0x1068a34),0)
  ;
  uVar3 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar6,uVar3,**(undefined4 **)(_UNK_01068bb0 + 0x1068a4c));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124) = uVar3;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 8);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01068bb4 + 0x1068a7c));
  System_Action_object____ctor_1f11414(uVar3,param_1,**(undefined4 **)(_UNK_01068bb8 + 0x1068a9c),0)
  ;
  uVar3 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar6,uVar3,**(undefined4 **)(_UNK_01068bbc + 0x1068ab4));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 8) = uVar3;
  thunk_FUN_00ec5080();
  piVar8 = *(int **)(_UNK_01068bc0 + 0x1068adc);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar8;
  }
  uVar6 = **(undefined4 **)(iVar4 + 0x5c);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01068bc4 + 0x1068b00));
  System_Action_Int32Enum__int____ctor_1f18658
            (uVar3,param_1,**(undefined4 **)(_UNK_01068bc8 + 0x1068b20),0);
  uVar3 = Rotatelab_GameAction_Int32Enum__int___op_Addition_23a45f4
                    (uVar6,uVar3,**(undefined4 **)(_UNK_01068bcc + 0x1068b38));
  **(undefined4 **)(*piVar8 + 0x5c) = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(*piVar8 + 0x5c) >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar8 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

