/* IL2CPP: Rotatelab.Grid.GridCell$$AddObject
void Rotatelab_Grid_GridCell__AddObject (Rotatelab_Grid_GridCell_o __this, UnityEngine_Component_o* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridCell$$AddObject
   void Rotatelab_Grid_GridCell__AddObject (Rotatelab_Grid_GridCell_o __this,
   UnityEngine_Component_o* obj, const MethodInfo* method); */

void Rotatelab_Grid_GridCell__AddObject_1105f80(int *param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0111600c + 0x1115f98);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01116010 + 0x1115fac));
    *pcVar4 = '\x01';
  }
  if (param_2 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_01116014 + 0x1115fc8) + 0xb8);
    if ((uVar3 <= *(byte *)(*param_2 + 0xb8)) &&
       (*(int *)(*(int *)(*param_2 + 100) + uVar3 * 4 + -4) == **(int **)(_UNK_01116014 + 0x1115fc8)
       )) {
      *param_1 = (int)param_2;
      goto thunk_FUN_00ec5080;
    }
  }
  param_1 = param_1 + 1;
  *param_1 = (int)param_2;
thunk_FUN_00ec5080:
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)param_1 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)param_1 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

