/* IL2CPP: Rotatelab.ObservableEnergy$$get_IsInfinite
bool Rotatelab_ObservableEnergy__get_IsInfinite (Rotatelab_ObservableEnergy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableEnergy$$get_IsInfinite
   bool Rotatelab_ObservableEnergy__get_IsInfinite (Rotatelab_ObservableEnergy_o* __this, const
   MethodInfo* method); */

bool Rotatelab_ObservableEnergy__get_IsInfinite_fb31e4(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x54);
  bVar2 = *(int *)(param_1 + 0x50) != 0;
  return (int)-(iVar1 + (uint)bVar2) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar2));
}

