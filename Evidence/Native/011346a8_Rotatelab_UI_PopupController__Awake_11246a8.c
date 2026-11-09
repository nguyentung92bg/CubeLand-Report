/* IL2CPP: Rotatelab.UI.PopupController$$Awake
void Rotatelab_UI_PopupController__Awake (Rotatelab_UI_PopupController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PopupController$$Awake
   void Rotatelab_UI_PopupController__Awake (Rotatelab_UI_PopupController_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_PopupController__Awake_11246a8(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_Transform__get_parent_36148d8(iVar3,0);
  puVar5 = (undefined4 *)(param_1 + 0x18);
  *puVar5 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

