/* IL2CPP: Rotatelab.Scripts.BlasterController$$<UpdateAnimationState>g__JumpVisual|166_0
void Rotatelab_Scripts_BlasterController___UpdateAnimationState_g__JumpVisual_166_0 (Rotatelab_Scripts_BlasterController_o* __this, float amount, float duration, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$<UpdateAnimationState>g__JumpVisual|166_0
   void Rotatelab_Scripts_BlasterController___UpdateAnimationState_g__JumpVisual_166_0
   (Rotatelab_Scripts_BlasterController_o* __this, float amount, float duration, float delay, const
   MethodInfo* method); */

void Rotatelab_Scripts_BlasterController___UpdateAnimationState_g__JumpVisual_166_0_10383f4
               (int param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  pcVar1 = (char *)(_UNK_010484e0 + 0x104841c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010484e4 + 0x1048434));
    *pcVar1 = '\x01';
  }
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,9,0);
  if (*(int *)(**(int **)(_UNK_010484e8 + 0x104846c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__LocalPositionY_2ce5b74
            (&uStack_50,uVar2,0,param_2,param_3 * 0.5,uStack_50,uStack_4c,uStack_48,uStack_44,
             uStack_40,2,3,param_4,0,0,0);
  return;
}

