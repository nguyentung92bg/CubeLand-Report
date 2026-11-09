/* IL2CPP: Rotatelab.Scripts.CameraManager$$OnEndDrag
void Rotatelab_Scripts_CameraManager__OnEndDrag (Rotatelab_Scripts_CameraManager_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.CameraManager$$OnEndDrag
   void Rotatelab_Scripts_CameraManager__OnEndDrag (Rotatelab_Scripts_CameraManager_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void Rotatelab_Scripts_CameraManager__OnEndDrag_ffb93c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0100b928 + 0x100b898);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b92c + 0x100b8ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b930 + 0x100b8b8));
    *pcVar2 = '\x01';
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    return;
  }
  piVar3 = *(int **)(_UNK_0100b934 + 0x100b8e0);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

