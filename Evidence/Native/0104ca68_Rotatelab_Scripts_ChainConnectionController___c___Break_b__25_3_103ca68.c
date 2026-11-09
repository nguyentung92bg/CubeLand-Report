/* IL2CPP: Rotatelab.Scripts.ChainConnectionController.<>c$$<Break>b__25_3
void Rotatelab_Scripts_ChainConnectionController___c___Break_b__25_3 (Rotatelab_Scripts_ChainConnectionController___c_o* __this, UnityEngine_ParticleSystem_o* breakParticle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ChainConnectionController.<>c$$<Break>b__25_3
   void Rotatelab_Scripts_ChainConnectionController___c___Break_b__25_3
   (Rotatelab_Scripts_ChainConnectionController___c_o* __this, UnityEngine_ParticleSystem_o*
   breakParticle, const MethodInfo* method); */

void Rotatelab_Scripts_ChainConnectionController___c___Break_b__25_3_103ca68
               (undefined4 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar1;
  int iVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar1 = (char *)(_UNK_0369e8f8 + 0x369e87c);
  if (*pcVar1 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0369e8fc + 0x369e890),1,0);
    *pcVar1 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(param_2,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0369e900 + 0x369e8c8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_0369e904 + 0x369e8d8);
    *(code **)(_UNK_0369e908 + 0x369e8e8) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x0369e8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar2,1);
  return;
}

