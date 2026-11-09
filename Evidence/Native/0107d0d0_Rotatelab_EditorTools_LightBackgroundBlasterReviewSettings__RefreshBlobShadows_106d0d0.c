/* IL2CPP: Rotatelab.EditorTools.LightBackgroundBlasterReviewSettings$$RefreshBlobShadows
void Rotatelab_EditorTools_LightBackgroundBlasterReviewSettings__RefreshBlobShadows (Rotatelab_EditorTools_LightBackgroundBlasterReviewSettings_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.EditorTools.LightBackgroundBlasterReviewSettings$$RefreshBlobShadows
   void Rotatelab_EditorTools_LightBackgroundBlasterReviewSettings__RefreshBlobShadows
   (Rotatelab_EditorTools_LightBackgroundBlasterReviewSettings_o* __this, const MethodInfo* method);
    */

void Rotatelab_EditorTools_LightBackgroundBlasterReviewSettings__RefreshBlobShadows_106d0d0
               (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  pcVar4 = (char *)(_UNK_0107d1ec + 0x107d0e8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107d1f0 + 0x107d0fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107d1f4 + 0x107d108));
    *pcVar4 = '\x01';
  }
  iVar1 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                    (param_1,1,**(undefined4 **)(_UNK_0107d1f8 + 0x107d120));
  uVar7 = 0;
  puVar6 = *(undefined4 **)(_UNK_0107d1fc + 0x107d140);
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar7) {
      return;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar1 + 0x10 + uVar7 * 4);
    if (iVar5 == 0) break;
    uVar2 = UnityEngine_Object__get_name_36081bc(iVar5,0);
    iVar3 = System_String__Equals_2a0942c(uVar2,*puVar6,4,0);
    if (iVar3 != 0) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_SpriteRenderer__set_color_35a1b0c
                (iVar5,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0);
    }
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

