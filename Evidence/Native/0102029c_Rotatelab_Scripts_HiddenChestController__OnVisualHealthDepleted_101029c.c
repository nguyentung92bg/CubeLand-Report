/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$OnVisualHealthDepleted
void Rotatelab_Scripts_HiddenChestController__OnVisualHealthDepleted (Rotatelab_Scripts_HiddenChestController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$OnVisualHealthDepleted
   void Rotatelab_Scripts_HiddenChestController__OnVisualHealthDepleted
   (Rotatelab_Scripts_HiddenChestController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_HiddenChestController__OnVisualHealthDepleted_101029c(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01020314 + 0x10202b0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020318 + 0x10202c4));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0102031c + 0x10202d8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,0x15,0);
                    /* WARNING: Could not recover jumptable at 0x01020310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}

