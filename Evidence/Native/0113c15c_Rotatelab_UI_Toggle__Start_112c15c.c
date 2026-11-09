/* IL2CPP: Rotatelab.UI.Toggle$$Start
void Rotatelab_UI_Toggle__Start (Rotatelab_UI_Toggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.Toggle$$Start
   void Rotatelab_UI_Toggle__Start (Rotatelab_UI_Toggle_o* __this, const MethodInfo* method); */

void Rotatelab_UI_Toggle__Start_112c15c(int *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_0113c200 + 0x113c170);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c204 + 0x113c184));
    *pcVar2 = '\x01';
  }
  if (param_1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_1[0xb] + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113c208 + 0x113c1a8));
  UnityEngine_Events_UnityAction___ctor_361afc4(uVar1,param_1,*(undefined4 *)(*param_1 + 0xec),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0113c1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  return;
}

