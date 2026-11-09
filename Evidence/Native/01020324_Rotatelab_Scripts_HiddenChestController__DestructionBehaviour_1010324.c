/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$DestructionBehaviour
void Rotatelab_Scripts_HiddenChestController__DestructionBehaviour (Rotatelab_Scripts_HiddenChestController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$DestructionBehaviour
   void Rotatelab_Scripts_HiddenChestController__DestructionBehaviour
   (Rotatelab_Scripts_HiddenChestController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_HiddenChestController__DestructionBehaviour_1010324(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 auStack_20 [16];
  
  pcVar2 = (char *)(_UNK_01020424 + 0x102033c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020428 + 0x1020350));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102042c + 0x102035c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020430 + 0x1020368));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020434 + 0x1020374));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Animator__Play_35915ac
            (*(int *)(param_1 + 0x48),**(undefined4 **)(_UNK_01020438 + 0x10203a4),0,0,0);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102043c + 0x10203bc));
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_01020440 + 0x10203d8),0);
  if (*(int *)(**(int **)(_UNK_01020444 + 0x10203ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2cea14c(auStack_20,param_1,0x40000000,uVar1,0,0,0);
  return;
}

