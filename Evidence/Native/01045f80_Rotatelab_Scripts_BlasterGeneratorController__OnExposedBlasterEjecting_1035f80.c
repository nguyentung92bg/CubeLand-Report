/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$OnExposedBlasterEjecting
void Rotatelab_Scripts_BlasterGeneratorController__OnExposedBlasterEjecting (Rotatelab_Scripts_BlasterGeneratorController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$OnExposedBlasterEjecting
   void Rotatelab_Scripts_BlasterGeneratorController__OnExposedBlasterEjecting
   (Rotatelab_Scripts_BlasterGeneratorController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterGeneratorController__OnExposedBlasterEjecting_1035f80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_010461e8 + 0x1045f98);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010461ec + 0x1045fac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010461f0 + 0x1045fb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010461f4 + 0x1045fc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010461f8 + 0x1045fd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010461fc + 0x1045fdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046200 + 0x1045fe8));
    *pcVar3 = '\x01';
  }
  PrimeTween_Sequence__Complete_2ceea60(param_1 + 0x68,0);
  piVar4 = (int *)(param_1 + 0x60);
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(*piVar4,0);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,3,0);
  if (*(int *)(**(int **)(_UNK_01046204 + 0x1046048) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_38,uVar1,0x3f800000,0x3ec00000,uStack_38,uStack_34,uStack_30,uStack_2c,
             uStack_28,1,0,0,0,0,0);
  if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___RemoveAt_267f3f8
            (*(int *)(param_1 + 0x5c),0,**(undefined4 **)(_UNK_01046208 + 0x10460c8));
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar6 = (undefined4 *)(*piVar4 + 0xb8);
  *puVar6 = 0;
  thunk_FUN_00ec5080(puVar6,0);
  *piVar4 = 0;
  thunk_FUN_00ec5080(piVar4,0);
  piVar4 = *(int **)(_UNK_0104620c + 0x104610c);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar4;
  }
  puVar6 = *(undefined4 **)(iVar2 + 0x5c);
  iVar5 = puVar6[1];
  if (iVar5 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar4 + 0x5c);
    }
    uVar1 = *puVar6;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01046210 + 0x1046154));
    System_Action_object____ctor_1f11414(iVar5,uVar1,**(undefined4 **)(_UNK_01046214 + 0x1046174),0)
    ;
    piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 4);
    *piVar4 = iVar5;
    thunk_FUN_00ec5080(piVar4,iVar5);
  }
  if (*(int *)(**(int **)(_UNK_01046218 + 0x104619c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_object__15d6154
            (&uStack_38,param_1,0x3dcccccd,iVar5,0,0,**(undefined4 **)(_UNK_0104621c + 0x10461c8));
  return;
}

