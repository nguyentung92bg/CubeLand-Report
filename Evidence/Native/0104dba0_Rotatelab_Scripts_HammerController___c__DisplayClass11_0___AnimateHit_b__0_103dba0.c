/* IL2CPP: Rotatelab.Scripts.HammerController.<>c__DisplayClass11_0$$<AnimateHit>b__0
void Rotatelab_Scripts_HammerController___c__DisplayClass11_0___AnimateHit_b__0 (Rotatelab_Scripts_HammerController___c__DisplayClass11_0_o* __this, Rotatelab_Scripts_HammerController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HammerController.<>c__DisplayClass11_0$$<AnimateHit>b__0
   void Rotatelab_Scripts_HammerController___c__DisplayClass11_0___AnimateHit_b__0
   (Rotatelab_Scripts_HammerController___c__DisplayClass11_0_o* __this,
   Rotatelab_Scripts_HammerController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_HammerController___c__DisplayClass11_0___AnimateHit_b__0_103dba0
               (int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0104dcb0 + 0x104dbc0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104dcb4 + 0x104dbd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104dcb8 + 0x104dbe0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104dcbc + 0x104dbec));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0104dcc0 + 0x104dc00));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,0x21,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0104dcc4 + 0x104dc30));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_CameraManager__ShakeCamera_ffb9dc(iVar1,0x3da3d70a,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0104dcc8 + 0x104dc64));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_ObjectManager__BreakWallsByHammer_102e314
            (iVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_2 + 0x6c));
  return;
}

