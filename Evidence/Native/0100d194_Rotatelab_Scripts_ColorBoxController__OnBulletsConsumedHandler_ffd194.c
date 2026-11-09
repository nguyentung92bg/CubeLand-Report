/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$OnBulletsConsumedHandler
void Rotatelab_Scripts_ColorBoxController__OnBulletsConsumedHandler (Rotatelab_Scripts_ColorBoxController_o* __this, int32_t color, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$OnBulletsConsumedHandler
   void Rotatelab_Scripts_ColorBoxController__OnBulletsConsumedHandler
   (Rotatelab_Scripts_ColorBoxController_o* __this, int32_t color, int32_t amount, const MethodInfo*
   method); */

void Rotatelab_Scripts_ColorBoxController__OnBulletsConsumedHandler_ffd194
               (int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x14) != param_2) {
    return;
  }
  if (0 < param_3) {
    do {
      if (*(int *)(param_1 + 0x30) < 1) {
        return;
      }
      Rotatelab_Scripts_ColorBoxController__DecreaseHp_ffd1d4(param_1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

