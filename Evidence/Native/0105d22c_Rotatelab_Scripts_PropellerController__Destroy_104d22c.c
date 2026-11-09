/* IL2CPP: Rotatelab.Scripts.PropellerController$$Destroy
void Rotatelab_Scripts_PropellerController__Destroy (Rotatelab_Scripts_PropellerController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PropellerController$$Destroy
   void Rotatelab_Scripts_PropellerController__Destroy (Rotatelab_Scripts_PropellerController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_PropellerController__Destroy_104d22c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_0105d498 + 0x105d244);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105d49c + 0x105d258));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105d4a0 + 0x105d264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105d4a4 + 0x105d270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105d4a8 + 0x105d27c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105d4ac + 0x105d288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105d4b0 + 0x105d294));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105d4b4 + 0x105d2a0));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x4c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_parent_36156e4(iVar1,0,0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105d4b8 + 0x105d300));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0105d4bc + 0x105d31c),0);
  piVar7 = *(int **)(_UNK_0105d4c0 + 0x105d330);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2ce9f2c(&uStack_48,0x3e19999a,uVar2,0,0,0);
  uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,9,0);
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_48,uVar2,0,0x3e800000,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,1,0,0,0
             ,0,0);
  piVar6 = *(int **)(_UNK_0105d4c4 + 0x105d3c8);
  iVar1 = *piVar6;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar3[3];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar2 = *puVar3;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105d4c8 + 0x105d418));
    System_Action_object____ctor_1f11414(iVar5,uVar2,**(undefined4 **)(_UNK_0105d4cc + 0x105d438),0)
    ;
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0xc);
    *piVar6 = iVar5;
    thunk_FUN_00ec5080(piVar6,iVar5);
  }
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_48,&uStack_30,param_1,iVar5,0,**(undefined4 **)(_UNK_0105d4d0 + 0x105d47c));
  return;
}

