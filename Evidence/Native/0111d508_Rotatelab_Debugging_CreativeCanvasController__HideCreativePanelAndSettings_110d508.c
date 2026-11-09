/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$HideCreativePanelAndSettings
void Rotatelab_Debugging_CreativeCanvasController__HideCreativePanelAndSettings (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$HideCreativePanelAndSettings
   void Rotatelab_Debugging_CreativeCanvasController__HideCreativePanelAndSettings
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__HideCreativePanelAndSettings_110d508
               (undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0111d61c + 0x111d51c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d620 + 0x111d530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d624 + 0x111d53c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d628 + 0x111d548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d62c + 0x111d554));
    *pcVar4 = '\x01';
  }
  Rotatelab_Debugging_CreativeCanvasController__HideCreativePanel_110d258(param_1);
  uVar3 = **(undefined4 **)(_UNK_0111d634 + 0x111d57c);
  if (*(int *)(*(int *)(*(int *)(_UNK_0111d630 + 0x111d570) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = System_Type__GetTypeFromHandle_2b80928(uVar3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)System_Type__GetMethod_2b8d9b0
                            (iVar1,**(undefined4 **)(_UNK_0111d638 + 0x111d5bc),0x34,0);
  if (*(int *)(**(int **)(_UNK_0111d63c + 0x111d5d4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = UnityEngine_Object__FindAnyObjectByType_object__14d422c
                    (**(undefined4 **)(_UNK_0111d640 + 0x111d5f0));
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar2 + 0x1c8))(piVar2,uVar3,0,0,0,0,*(undefined4 *)(*piVar2 + 0x1cc));
  return;
}

