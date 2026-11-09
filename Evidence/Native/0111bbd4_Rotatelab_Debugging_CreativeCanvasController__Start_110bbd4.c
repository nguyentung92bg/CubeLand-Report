/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$Start
void Rotatelab_Debugging_CreativeCanvasController__Start (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$Start
   void Rotatelab_Debugging_CreativeCanvasController__Start
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__Start_110bbd4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_20 [16];
  
  pcVar3 = (char *)(_UNK_0111bcd4 + 0x111bbec);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bcd8 + 0x111bc00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bcdc + 0x111bc0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111bce0 + 0x111bc18));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111bce4 + 0x111bc6c));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0111bce8 + 0x111bc88),0);
  if (*(int *)(**(int **)(_UNK_0111bcec + 0x111bc9c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_2ce9f2c(auStack_20,0x40400000,uVar2,0,0,0);
  return;
}

