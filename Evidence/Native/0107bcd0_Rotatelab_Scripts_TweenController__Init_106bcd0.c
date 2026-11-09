/* IL2CPP: Rotatelab.Scripts.TweenController$$Init
void Rotatelab_Scripts_TweenController__Init (Rotatelab_Scripts_TweenController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x015ea298) */
/* WARNING: Removing unreachable block (ram,0x015ea2a0) */
/* WARNING: Removing unreachable block (ram,0x015ea2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.TweenController$$Init
   void Rotatelab_Scripts_TweenController__Init (Rotatelab_Scripts_TweenController_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_TweenController__Init_106bcd0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint in_fpscr;
  float fVar7;
  
  pcVar5 = (char *)(_UNK_0107bdd8 + 0x107bce4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bddc + 0x107bcf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bde0 + 0x107bd04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107bde4 + 0x107bd10));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0107bde8 + 0x107bd24) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar2 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  uVar1 = DG_Tweening_TweenSettingsExtensions__SetLink_object__15da040
                    (uVar1,uVar2,**(undefined4 **)(_UNK_0107bdec + 0x107bd5c));
  puVar6 = (undefined4 *)(param_1 + 0x10);
  *puVar6 = uVar1;
  thunk_FUN_00ec5080(puVar6,uVar1);
  Rotatelab_Scripts_TweenController__DecideSequence_106bdf4(param_1);
  uVar2 = *puVar6;
  uVar1 = UnityEngine_Random__Range_35f8ac0
                    (*(float *)(param_1 + 0x1c) + _UNK_0107bdd0,
                     *(float *)(param_1 + 0x1c) + _UNK_0107bdd4,0);
  iVar3 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar2,uVar1,0);
  uVar4 = **(uint **)(_UNK_0107bdf0 + 0x107bdc4);
  if (iVar3 != 0) {
    uVar4 = (uint)*(byte *)(iVar3 + 0x94);
  }
  if ((iVar3 != 0 && uVar4 != 0) && (*(char *)(iVar3 + 0xa4) == '\0')) {
    *(undefined4 *)(iVar3 + 100) = 0x7fffffff;
    if (*(int *)(iVar3 + 8) != 0) {
      return;
    }
    fVar7 = (float)VectorSignedToFloat(0x7fffffff,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar3 + 0xac) = *(float *)(iVar3 + 0x60) * fVar7;
    return;
  }
  return;
}

