// $Id$
//==============================================================================
//!
//! \file SIMElasticity.C
//!
//! \date Dec 04 2010
//!
//! \author Knut Morten Okstad / SINTEF
//!
//! \brief Solution driver for NURBS-based linear elastic FEM analysis.
//!
//==============================================================================

#include "SIMElasticity.h"
#include "SIM2D.h"

template<> bool SIMElasticity<SIM2D>::planeStrain = false;
template<> bool SIMElasticity<SIM2D>::axiSymmetry = false;
template<> bool SIMElasticity<SIM2D>::GIpointsVTF = false;
