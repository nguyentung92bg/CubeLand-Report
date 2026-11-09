/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController.<>c__DisplayClass13_0$$<OnMultiImageParticleStartHandler>b__1
void Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass13_0___OnMultiImageParticleStartHandler_b__1 (Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass13_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Currency.UI.UIParticleAnimController.<>c__DisplayClass13_0$$<OnMultiImageParticleStartHandler>b__1
   void 
   Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass13_0___OnMultiImageParticleStartHandler_b__1
   (Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass13_0_o* __this, const
   MethodInfo* method); */

void Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass13_0___OnMultiImageParticleStartHandler_b__1_108bf50
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  pcVar3 = (char *)(_UNK_0109bfe4 + 0x109bf84);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109bfe8 + 0x109bf98));
    *pcVar3 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_0109bfec + 0x109bfb0) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
  return;
}

