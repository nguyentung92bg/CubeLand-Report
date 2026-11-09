/* IL2CPP: Rotatelab.Scripts.BombController$$Initialize
void Rotatelab_Scripts_BombController__Initialize (Rotatelab_Scripts_BombController_o* __this, Rotatelab_BombData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BombController$$Initialize
   void Rotatelab_Scripts_BombController__Initialize (Rotatelab_Scripts_BombController_o* __this,
   Rotatelab_BombData_o* data, const MethodInfo* method); */

void Rotatelab_Scripts_BombController__Initialize_ff652c(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  pcVar2 = (char *)(_UNK_010066a0 + 0x1006548);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010066a4 + 0x100655c));
    *pcVar2 = '\x01';
  }
  param_1[0xe] = param_2;
  thunk_FUN_00ec5080(param_1 + 0xe,param_2);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c
            (iVar1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x10),0);
  iVar1 = *(int *)(param_2 + 0x24);
  param_1[0x10] = iVar1;
  param_1[0x11] = iVar1;
  if (param_1[4] != 0) {
    iVar1 = UnityEngine_Renderer__get_materials_35c59a8(param_1[4],0);
    piVar4 = param_1 + 0x12;
    *piVar4 = iVar1;
    thunk_FUN_00ec5080(piVar4,iVar1);
    iVar1 = *piVar4;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (1 < *(uint *)(iVar1 + 0xc)) {
      piVar4 = *(int **)(_UNK_010066a8 + 0x1006628);
      iVar3 = *(int *)(iVar1 + 0x14);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar4;
      }
      if (iVar3 != 0) {
        UnityEngine_Material__SetFloat_35caf8c
                  (iVar3,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x60),0,0);
        (**(code **)(*param_1 + 0x108))
                  (param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(*param_1 + 0x10c));
        Rotatelab_Scripts_BaseTargetableController__OnInitialized_ff58bc(param_1,1);
        iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
        if (iVar1 != 0) {
          UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
          *(undefined1 *)((int)param_1 + 0x19) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

