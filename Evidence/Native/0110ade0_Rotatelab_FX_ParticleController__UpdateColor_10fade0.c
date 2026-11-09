/* IL2CPP: Rotatelab.FX.ParticleController$$UpdateColor
void Rotatelab_FX_ParticleController__UpdateColor (Rotatelab_FX_ParticleController_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.ParticleController$$UpdateColor
   void Rotatelab_FX_ParticleController__UpdateColor (Rotatelab_FX_ParticleController_o* __this,
   UnityEngine_Color_o color, const MethodInfo* method); */

void Rotatelab_FX_ParticleController__UpdateColor_10fade0
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar1 = (char *)(_UNK_0110af14 + 0x110ae00);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110af18 + 0x110ae14));
    *pcVar1 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x14);
  uStack_28 = 0;
  uVar3 = 0;
  while( true ) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar3) {
      return;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar2 = *(int *)(iVar4 + 0x10 + uVar3 * 4);
    if (iVar2 == 0) break;
    iVar2 = UnityEngine_Component__GetComponent_object__143f3b0
                      (iVar2,**(undefined4 **)(_UNK_0110af1c + 0x110ae7c));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_28 = UnityEngine_ParticleSystem__get_main_368ecf8(iVar2,0);
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_369036c
              (&uStack_54,param_2,param_3,param_4,param_5,0);
    UnityEngine_ParticleSystem_MainModule__set_startColor_368f2ec
              (&uStack_28,uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,
               uStack_38,uStack_34,uStack_30,uStack_2c,0);
    uVar3 = uVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

