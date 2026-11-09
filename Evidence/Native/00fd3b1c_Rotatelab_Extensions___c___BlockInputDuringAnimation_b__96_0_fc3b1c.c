/* IL2CPP: Rotatelab.Extensions.<>c$$<BlockInputDuringAnimation>b__96_0
void Rotatelab_Extensions___c___BlockInputDuringAnimation_b__96_0 (Rotatelab_Extensions___c_o* __this, System_IDisposable_o* scope, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions.<>c$$<BlockInputDuringAnimation>b__96_0
   void Rotatelab_Extensions___c___BlockInputDuringAnimation_b__96_0 (Rotatelab_Extensions___c_o*
   __this, System_IDisposable_o* scope, const MethodInfo* method); */

void Rotatelab_Extensions___c___BlockInputDuringAnimation_b__96_0_fc3b1c
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_00fd3bc4 + 0xfd3b30);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd3bc8 + 0xfd3b44));
    *pcVar5 = '\x01';
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_00fd3bcc + 0xfd3b68)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_00fd3bb0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_00fd3bcc + 0xfd3b68),0);
LAB_00fd3bb0:
                    /* WARNING: Could not recover jumptable at 0x00fd3bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}

