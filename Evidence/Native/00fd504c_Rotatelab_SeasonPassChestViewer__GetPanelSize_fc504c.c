/* IL2CPP: Rotatelab.SeasonPassChestViewer$$GetPanelSize
UnityEngine_Vector2_o Rotatelab_SeasonPassChestViewer__GetPanelSize (Rotatelab_SeasonPassChestViewer_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassChestViewer$$GetPanelSize
   UnityEngine_Vector2_o Rotatelab_SeasonPassChestViewer__GetPanelSize
   (Rotatelab_SeasonPassChestViewer_o* __this, int32_t count, const MethodInfo* method); */

void Rotatelab_SeasonPassChestViewer__GetPanelSize_fc504c
               (undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = param_3 - 1;
  if (uVar2 < 4) {
    uVar1 = *(undefined4 *)(_UNK_00fd508c + 0xfd5068 + uVar2 * 4);
    uVar3 = *(undefined4 *)(_UNK_00fd5090 + 0xfd506c + uVar2 * 4);
  }
  else {
    uVar1 = 0x43af0000;
    uVar3 = 0x43c80000;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}

