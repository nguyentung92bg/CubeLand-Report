/* IL2CPP: Rotatelab.Networking.HiroController$$Start
void Rotatelab_Networking_HiroController__Start (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$Start
   void Rotatelab_Networking_HiroController__Start (Rotatelab_Networking_HiroController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Networking_HiroController__Start_114a3c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 uStack_19;
  
  pcVar3 = (char *)(_UNK_0115a680 + 0x115a3d8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a684 + 0x115a3ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a688 + 0x115a3f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a68c + 0x115a404));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a690 + 0x115a410));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a694 + 0x115a41c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a698 + 0x115a428));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a69c + 0x115a434));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a6a0 + 0x115a440));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a6a4 + 0x115a44c));
    *pcVar3 = '\x01';
  }
  uStack_19 = 0;
  uStack_19 = Rotatelab_Networking_HiroController__InitializeSystemsAsync_114a6cc(param_1);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_19,0);
  uVar1 = Rotatelab_ObservableEnergy__UpdateTimersCoroutine_fb3bd0(0);
  UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar1,0);
  piVar5 = *(int **)(_UNK_0115a6a8 + 0x115a498);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  puVar6 = *(undefined4 **)(_UNK_0115a6ac + 0x115a4bc);
  uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x74);
  uVar1 = thunk_FUN_00f00cdc(*puVar6);
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_0115a6b0 + 0x115a4dc),0);
  uVar1 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar1,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x74) = uVar1;
  thunk_FUN_00ec5080();
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x78);
  uVar1 = thunk_FUN_00f00cdc(*puVar6);
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_0115a6b4 + 0x115a534),0);
  uVar1 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar1,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x78) = uVar1;
  thunk_FUN_00ec5080();
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7c);
  uVar1 = thunk_FUN_00f00cdc(*puVar6);
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_0115a6b8 + 0x115a58c),0);
  uVar1 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar1,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7c) = uVar1;
  thunk_FUN_00ec5080();
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x94);
  uVar1 = thunk_FUN_00f00cdc(*puVar6);
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_0115a6bc + 0x115a5e4),0);
  uVar1 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar1,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x94) = uVar1;
  thunk_FUN_00ec5080();
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xe0);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0115a6c0 + 0x115a624));
  System_Action_object____ctor_1f11414(uVar1,param_1,**(undefined4 **)(_UNK_0115a6c4 + 0x115a644),0)
  ;
  uVar1 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar4,uVar1,**(undefined4 **)(_UNK_0115a6c8 + 0x115a65c));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xe0) = uVar1;
  thunk_FUN_00ec5080();
  return;
}

