/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnShuffleAnimationStartedHandler
void Rotatelab_Scripts_PlaceableManager__OnShuffleAnimationStartedHandler (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnShuffleAnimationStartedHandler
   void Rotatelab_Scripts_PlaceableManager__OnShuffleAnimationStartedHandler
   (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__OnShuffleAnimationStartedHandler_104a1b0
               (undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_28 [16];
  
  pcVar3 = (char *)(_UNK_0105a2fc + 0x105a1c8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a300 + 0x105a1dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a304 + 0x105a1e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a308 + 0x105a1f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a30c + 0x105a200));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a310 + 0x105a20c));
    *pcVar3 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0105a314 + 0x105a220);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar4 = puVar2[0x18];
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar5 = *puVar2;
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105a318 + 0x105a268));
    System_Action_object____ctor_1f11414(iVar4,uVar5,**(undefined4 **)(_UNK_0105a31c + 0x105a288),0)
    ;
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x60);
    *piVar6 = iVar4;
    thunk_FUN_00ec5080(piVar6,iVar4);
  }
  if (*(int *)(**(int **)(_UNK_0105a320 + 0x105a2b0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_object__15d6154
            (auStack_28,param_1,0x3f333333,iVar4,0,0,**(undefined4 **)(_UNK_0105a324 + 0x105a2dc));
  return;
}

