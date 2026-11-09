/* IL2CPP: Rotatelab.Scripts.ScrewController$$DecreaseHealthVisually
void Rotatelab_Scripts_ScrewController__DecreaseHealthVisually (Rotatelab_Scripts_ScrewController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ScrewController$$DecreaseHealthVisually
   void Rotatelab_Scripts_ScrewController__DecreaseHealthVisually
   (Rotatelab_Scripts_ScrewController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ScrewController__DecreaseHealthVisually_10504ac(int *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01060574 + 0x10604c0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01060578 + 0x10604d4));
    *pcVar2 = '\x01';
  }
  iVar1 = param_1[0x16];
  if (0 < iVar1) {
    uVar3 = 0xc;
    if (((uint)(iVar1 * -0x33333333) >> 1 | iVar1 * -0x80000000) < 0x1999999a) {
      uVar3 = 0x19;
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0106057c + 0x106050c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,uVar3,0);
  }
  param_1[0x16] = param_1[0x16] + -1;
  Rotatelab_Scripts_ScrewController__AnimateHit_10501c4(param_1);
  if (param_1[0x16] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01060570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}

