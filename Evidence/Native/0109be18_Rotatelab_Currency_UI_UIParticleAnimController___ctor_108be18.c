/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$.ctor
void Rotatelab_Currency_UI_UIParticleAnimController___ctor (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$.ctor
   void Rotatelab_Currency_UI_UIParticleAnimController___ctor
   (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, const MethodInfo* method); */

int Rotatelab_Currency_UI_UIParticleAnimController___ctor_108be18(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = UnityEngine_AnimationCurve__EaseInOut_35a6ba0(0,0,0x3f800000,0x3f800000,0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  thunk_FUN_00ec5080();
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

