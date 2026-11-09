/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController.<>c$$<Destroy>b__32_1
void Rotatelab_Scripts_FlyingPiggyController___c___Destroy_b__32_1 (Rotatelab_Scripts_FlyingPiggyController___c_o* __this, Rotatelab_Scripts_FlyingPiggyController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController.<>c$$<Destroy>b__32_1
   void Rotatelab_Scripts_FlyingPiggyController___c___Destroy_b__32_1
   (Rotatelab_Scripts_FlyingPiggyController___c_o* __this,
   Rotatelab_Scripts_FlyingPiggyController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_FlyingPiggyController___c___Destroy_b__32_1_100e9a0
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0101ea24 + 0x101e9b4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ea28 + 0x101e9c8));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101ea2c + 0x101e9dc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,0xc,0);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0101ea20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x140))(param_2,*(undefined4 *)(*param_2 + 0x144));
  return;
}

